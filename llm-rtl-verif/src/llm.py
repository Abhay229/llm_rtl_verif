import json, os, time, urllib.error, urllib.request

SYSTEM = """You are a senior RTL verification engineer writing SystemVerilog assertions.
Reply with ONE JSON object only. No prose, no markdown fences.
A property object is: {"name": snake_case, "description": one line,
 "antecedent": boolean expr or "", "operator": "|->" | "|=>" | "invariant", "consequent": boolean expr}
Rules: plain boolean SV expressions over rst_n wr_en rd_en wdata rdata full empty count, params WIDTH DEPTH.
Allowed system functions: $past $rose $fell $stable $changed $countones $onehot $onehot0 $clog2.
No ##, no sequences, no ';'. The framework adds @(posedge clk) disable iff (!rst_n).
"|->" checks the same cycle, "|=>" the next cycle. Use "invariant" with empty antecedent for always-true facts."""


def parse_json(text):
    try:
        return json.loads(text[text.index("{"): text.rindex("}") + 1])
    except ValueError:
        return {}


class BaseLLM:
    """Shared prompts; subclasses only implement _chat(user) -> raw text."""

    def _chat(self, user):
        raise NotImplementedError

    def _call(self, user):
        for _ in range(3):  # small models sometimes return broken JSON; retry
            d = parse_json(self._chat(user))
            if d:
                return d
        return {}

    def generate(self, spec, rtl, ctx, n):
        prompt = (f"SPEC:\n{spec}\n\nRTL:\n{rtl}\n\nREFERENCE PATTERNS:\n" + "\n---\n".join(ctx) +
                  f"\n\nPropose {n} diverse, correct properties. "
                  'Return {"properties": [...]}.')
        return self._call(prompt).get("properties", [])

    def refine(self, spec, rtl, ctx, report, log_excerpt):
        prompt = (f"SPEC:\n{spec}\n\nRTL:\n{rtl}\n\nREFERENCE PATTERNS:\n" + "\n---\n".join(ctx) +
                  "\n\nRESULTS (status per property; simulation is ground truth):\n" +
                  json.dumps(report, indent=1) + f"\n\nSIM LOG EXCERPT:\n{log_excerpt}\n\n"
                  "For each non-passing property give a root cause. verdict is one of: "
                  "assertion_too_strong, assertion_wrong, syntax, vacuous_need_stimulus, possible_rtl_bug. "
                  "Then propose corrected properties, new properties covering gaps, and extra directed "
                  'stimulus lines "<wr_en> <rd_en> <hex wdata>" (max 40, e.g. "1 1 a5"). Return '
                  '{"analysis":[{"name","verdict","root_cause"}],"revised":[...],"new":[...],"extra_stimulus":[...]}')
        return self._call(prompt)


def _post(url, payload, headers=None, timeout=600):
    req = urllib.request.Request(url, data=json.dumps(payload).encode(),
                                 headers={"Content-Type": "application/json", **(headers or {})})
    try:
        with urllib.request.urlopen(req, timeout=timeout) as r:
            return json.loads(r.read())
    except urllib.error.HTTPError as e:
        raise RuntimeError(f"HTTP {e.code} from {url.split('?')[0]}: {e.read().decode()[:300]}") from None
    except urllib.error.URLError as e:
        raise RuntimeError(f"Cannot reach {url.split('?')[0]}: {e.reason}") from None


class OllamaLLM(BaseLLM):
    """Free, local, offline. Needs Ollama running: https://ollama.com"""

    def __init__(self, model=None):
        self.model = model or os.environ.get("OLLAMA_MODEL", "qwen2.5-coder:7b")
        self.host = os.environ.get("OLLAMA_HOST", "http://localhost:11434")

    def _chat(self, user):
        r = _post(f"{self.host}/api/chat", {
            "model": self.model, "stream": False, "format": "json",
            "options": {"temperature": 0.2, "num_ctx": 8192},
            "messages": [{"role": "system", "content": SYSTEM},
                         {"role": "user", "content": user}]})
        return r["message"]["content"]


class GeminiLLM(BaseLLM):
    """Google Gemini API free tier (rate-limited). Key from https://aistudio.google.com/apikey"""

    def __init__(self, model=None):
        self.model = model or os.environ.get("GEMINI_MODEL", "gemini-2.0-flash")
        self.key = os.environ.get("GEMINI_API_KEY")
        if not self.key:
            raise SystemExit("Set GEMINI_API_KEY (free key from https://aistudio.google.com/apikey)")

    def _chat(self, user):
        url = f"https://generativelanguage.googleapis.com/v1beta/models/{self.model}:generateContent"
        for attempt in range(4):
            try:
                r = _post(url, {
                    "systemInstruction": {"parts": [{"text": SYSTEM}]},
                    "contents": [{"role": "user", "parts": [{"text": user}]}],
                    "generationConfig": {"temperature": 0.2, "responseMimeType": "application/json"}},
                    headers={"x-goog-api-key": self.key})
                return r["candidates"][0]["content"]["parts"][0]["text"]
            except RuntimeError as e:
                if "HTTP 429" in str(e) and attempt < 3:   # free-tier rate limit
                    time.sleep(20 * (attempt + 1))
                    continue
                raise
        return ""


class ClaudeLLM(BaseLLM):
    """Paid Anthropic API (optional)."""

    def __init__(self, model=None):
        import anthropic
        self.client = anthropic.Anthropic()
        self.model = model or os.environ.get("CLAUDE_MODEL", "claude-sonnet-5-5")

    def _chat(self, user):
        r = self.client.messages.create(
            model=self.model, max_tokens=4096, system=SYSTEM,
            messages=[{"role": "user", "content": user}])
        return "".join(b.text for b in r.content if b.type == "text")


class MockLLM:
    """Offline stand-in that exercises every pipeline branch (no API key needed)."""

    def generate(self, spec, rtl, ctx, n):
        return [
            dict(name="no_overflow", description="full write keeps count", antecedent="full && wr_en && !rd_en",
                 operator="|=>", consequent="count == $past(count)"),
            dict(name="syntax_bug", description="deliberate syntax error", antecedent="empty",
                 operator="|->", consequent="count ==== 0"),
            dict(name="too_strong", description="every write increments", antecedent="wr_en",
                 operator="|=>", consequent="count == $past(count) + 1"),
            dict(name="vacuous_one", description="never-true antecedent", antecedent="count > DEPTH",
                 operator="|->", consequent="full"),
        ]

    def refine(self, spec, rtl, ctx, report, log_excerpt):
        return dict(
            analysis=[{"name": r["name"], "verdict": "mock", "root_cause": "mock"} for r in report],
            revised=[
                dict(name="syntax_fixed", description="empty means count 0", antecedent="empty",
                     operator="|->", consequent="count == 0"),
                dict(name="write_incr", description="lone legal write increments",
                     antecedent="wr_en && !full && !rd_en", operator="|=>",
                     consequent="count == $past(count) + 1")],
            new=[dict(name="read_decr", description="lone legal read decrements",
                      antecedent="rd_en && !empty && !wr_en", operator="|=>",
                      consequent="count == $past(count) - 1")],
            extra_stimulus=["1 1 aa", "1 1 bb", "0 1 00"])
