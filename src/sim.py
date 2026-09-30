import re, shutil, subprocess
from dataclasses import dataclass, field
from pathlib import Path

FAIL_RE = re.compile(r"ASSERT_FAIL (GEN|GOLD):(\w+) t=(\d+)")
COV_RE = re.compile(r"COVER_COUNT (\w+) (\d+)")
TB_RE = re.compile(r"TB_DONE errors=(\d+)")


@dataclass
class SimResult:
    compile_ok: bool
    compile_log: str = ""
    run_log: str = ""
    fails: dict = field(default_factory=dict)   # (GEN|GOLD, name) -> [times]
    cover: dict = field(default_factory=dict)   # name -> antecedent hit count
    tb_errors: int = -1                          # -1 => TB_DONE never printed


def _sh(cmd, cwd, timeout):
    try:
        p = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True, timeout=timeout)
        return p.returncode, p.stdout + p.stderr
    except subprocess.TimeoutExpired:
        return 124, "TIMEOUT"
    except FileNotFoundError as e:
        return 127, f"tool not found: {e}"


def run(files, work, backend="verilator", top="tb_fifo", bug=0, stim=None, timeout=600):
    work = Path(work).resolve()
    work.mkdir(exist_ok=True)
    files = [str(Path(f).resolve()) for f in files]
    plus = [f"+STIM={Path(stim).resolve()}"] if stim else []

    if backend == "verilator":
        obj = work / f"obj_{bug}"
        shutil.rmtree(obj, ignore_errors=True)
        rc, clog = _sh(["verilator", "--binary", "--assert", "--timing", "-Wno-fatal", "-Wno-lint",
                        "-Wno-style", "--top-module", top, f"-GBUG={bug}", "--Mdir", str(obj),
                        "-o", "simv", *files], work, timeout)
        if rc != 0:
            return SimResult(False, clog)
        rc, rlog = _sh([str(obj / "simv"), *plus], work, timeout)
    elif backend == "questa":
        lib = work / f"lib_{bug}"
        shutil.rmtree(lib, ignore_errors=True)
        rc, clog = _sh(["vlog", "-sv", "-work", str(lib), *files], work, timeout)
        if rc != 0 or "** Error" in clog:
            return SimResult(False, clog)
        rc, rlog = _sh(["vsim", "-c", "-work", str(lib), top, f"-GBUG={bug}", *plus,
                        "-do", "run -all; quit -f"], work, timeout)
    else:
        raise ValueError(f"unknown backend {backend}")

    res = SimResult(True, clog, rlog)
    for k, n, t in FAIL_RE.findall(rlog):
        res.fails.setdefault((k, n), []).append(int(t))
    for n, c in COV_RE.findall(rlog):
        res.cover[n] = int(c)
    m = TB_RE.search(rlog)
    res.tb_errors = int(m.group(1)) if m else -1
    return res
