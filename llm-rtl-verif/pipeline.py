#!/usr/bin/env python3
"""Closed-loop LLM-assisted SVA generation: generate -> compile -> simulate -> feedback -> mutation check."""
import argparse, json, re
from pathlib import Path
from src import sim, wrap
from src.llm import ClaudeLLM, GeminiLLM, MockLLM, OllamaLLM
from src.rag import Retriever

ROOT = Path(__file__).resolve().parent
RTL, GOLD, TB = ROOT / "rtl/fifo.sv", ROOT / "sva/fifo_props_golden.sv", ROOT / "tb/tb_fifo.sv"
SPEC = """Synchronous FIFO, DEPTH entries, WIDTH bits. Signals: clk, rst_n (async, active low), wr_en, rd_en,
wdata, rdata (registered), full, empty, count (occupancy). Writes are ignored when full; reads are ignored
when empty. full <=> count==DEPTH, empty <=> count==0. Simultaneous rd+wr (neither full nor empty) keeps count."""
STIM_RE = re.compile(r"^[01]\s+[01]\s+[0-9a-fA-F]+$")


def normalize(raw, used):
    ok, rejected = [], []
    for p in raw:
        p = dict(p)
        p["name"] = wrap.sanitize_name(p.get("name", "p"))
        base, i = p["name"], 2
        while p["name"] in used:
            p["name"] = f"{base}_{i}"
            i += 1
        err = wrap.validate(p)
        used.add(p["name"])
        if err:
            rejected.append((p["name"], err))
        else:
            ok.append(p)
    return ok, rejected


def compile_errors_for(log, rng):
    out = []
    for l in log.splitlines():
        m = re.search(r"generated_props\.sv[:(](\d+)", l)
        if m and rng[0] <= int(m.group(1)) <= rng[1]:
            out.append(l.strip())
    return "\n".join(out[:3])


def evaluate(props, work, args, bug=0, stim=None):
    """Compile (isolating bad candidates), simulate, classify each candidate."""
    status, active, res = {}, list(props), None
    for _ in range(len(props) + 2):
        text, ranges = wrap.render_module(active)
        gen = work / "generated_props.sv"
        gen.write_text(text)
        res = sim.run([RTL, GOLD, gen, TB], work, args.sim, bug=bug, stim=stim)
        if res.compile_ok:
            break
        bad = [n for n, r in ranges.items() if compile_errors_for(res.compile_log, r)]
        if not bad:  # error outside candidate lines: blame everything
            for p in active:
                status[p["name"]] = ("compile_error", res.compile_log[-500:])
            return status, res
        for p in list(active):
            if p["name"] in bad:
                status[p["name"]] = ("compile_error",
                                     compile_errors_for(res.compile_log, ranges[p["name"]]))
                active.remove(p)
    else:
        for p in active:
            status[p["name"]] = ("compile_error", "still failing after isolation")
        return status, res

    for p in active:
        n = p["name"]
        t = res.fails.get(("GEN", n))
        if t:
            status[n] = ("fail", f"asserted {len(t)}x, first at t={t[0]}")
        elif res.cover.get(n, 0) == 0:
            status[n] = ("vacuous", "antecedent never true in simulation")
        else:
            status[n] = ("pass", f"antecedent hit {res.cover[n]}x")
    return status, res


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--sim", default="verilator", choices=["verilator", "questa"])
    ap.add_argument("--llm", default="ollama", choices=["ollama", "gemini", "claude", "mock"],
                    help="ollama = free/local (default), gemini = free-tier API, claude = paid, mock = offline stub")
    ap.add_argument("--mock", action="store_true", help="alias for --llm mock")
    ap.add_argument("--model", default=None)
    ap.add_argument("--iters", type=int, default=3)
    ap.add_argument("--n", type=int, default=12)
    ap.add_argument("--work", default="work")
    ap.add_argument("--out", default="out")
    args = ap.parse_args()
    work, out = ROOT / args.work, ROOT / args.out
    work.mkdir(exist_ok=True)
    out.mkdir(exist_ok=True)

    kind = "mock" if args.mock else args.llm
    llm = {"mock": MockLLM, "ollama": OllamaLLM, "gemini": GeminiLLM, "claude": ClaudeLLM}[kind]
    llm = llm() if kind == "mock" else llm(args.model)
    ret = Retriever(ROOT / "rag/corpus")
    rtl_src = RTL.read_text()

    used = set()
    ctx = ret.query(SPEC + " no overflow no underflow occupancy flags", k=5)
    props, rej = normalize(llm.generate(SPEC, rtl_src, ctx, args.n), used)
    for n, e in rej:
        print(f"[reject] {n}: {e}")

    history, extra, last_status = {}, [], {}
    for it in range(1, args.iters + 1):
        stim = None
        if extra:
            stim = work / "extra_stim.txt"
            stim.write_text("\n".join(extra) + "\n")
        last_status, res = evaluate(props, work, args, stim=stim)
        if res is not None and not res.compile_ok:
            print("[error] compilation failed for everything. Log tail:\n" + res.compile_log[-1500:])
            break
        if res and (any(k[0] == "GOLD" for k in res.fails) or res.tb_errors != 0):
            print(f"[warn] baseline RTL/TB/golden inconsistent (tb_errors={res.tb_errors}); fix before trusting results")
        for p in props:
            s, d = last_status[p["name"]]
            history[p["name"]] = {"prop": p, "status": s, "detail": d, "iteration": it}
        counts = {s: sum(1 for v in last_status.values() if v[0] == s)
                  for s in ("pass", "fail", "vacuous", "compile_error")}
        print(f"[iter {it}] {counts}")
        pending = [p for p in props if last_status[p["name"]][0] != "pass"]
        if not pending or it == args.iters:
            break

        report = [{"name": p["name"], "description": p.get("description", ""),
                   "antecedent": p.get("antecedent", ""), "operator": p["operator"],
                   "consequent": p["consequent"], "status": last_status[p["name"]][0],
                   "detail": last_status[p["name"]][1]} for p in pending]
        excerpt = "\n".join(l for l in res.run_log.splitlines()
                            if "ASSERT_FAIL" in l or "TB_ERR" in l)[:3000]
        ctx2 = ret.query(" ".join(r["description"] + " " + r["detail"] for r in report), k=4)
        fb = llm.refine(SPEC, rtl_src, ctx2, report, excerpt)
        for a in fb.get("analysis", []):
            print(f"   {a.get('name')}: {a.get('verdict')} | {a.get('root_cause')}")
        new, rej = normalize(fb.get("revised", []) + fb.get("new", []), used)
        for n, e in rej:
            print(f"[reject] {n}: {e}")
        extra += [str(s).strip() for s in fb.get("extra_stimulus", [])[:40] if STIM_RE.match(str(s).strip())]
        props = [p for p in props if last_status[p["name"]][0] == "pass"] + new

    accepted = [p for p in props if last_status.get(p["name"], ("",))[0] == "pass"]
    text, _ = wrap.render_module(accepted)
    (out / "accepted_assertions.sv").write_text(text)

    # ---- mutation testing: do the accepted assertions catch injected bugs? ----
    (work / "generated_props.sv").write_text(text)
    stim = work / "extra_stim.txt" if extra else None
    mutants = {}
    for bug in (1, 2, 3, 4):
        r = sim.run([RTL, GOLD, work / "generated_props.sv", TB], work, args.sim, bug=bug, stim=stim)
        mutants[bug] = dict(
            compiled=r.compile_ok,
            tb_scoreboard=r.tb_errors > 0,
            golden=sorted({n for (k, n) in r.fails if k == "GOLD"}),
            generated=sorted({n for (k, n) in r.fails if k == "GEN"}))
        print(f"[mutant {bug}] scoreboard={mutants[bug]['tb_scoreboard']} "
              f"golden={len(mutants[bug]['golden'])} generated={len(mutants[bug]['generated'])}")

    total = len(history)
    report = dict(candidates=total, accepted=len(accepted),
                  by_status={s: sum(1 for h in history.values() if h["status"] == s)
                             for s in ("pass", "fail", "vacuous", "compile_error")},
                  mutants=mutants, history=history)
    (out / "report.json").write_text(json.dumps(report, indent=2))
    print(f"\nAccepted {len(accepted)}/{total} candidates -> {out / 'accepted_assertions.sv'}")


if __name__ == "__main__":
    main()
