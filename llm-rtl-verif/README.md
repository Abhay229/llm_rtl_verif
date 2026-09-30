# LLM-Assisted RTL Verification Framework

RAG-grounded LLM proposes SVA properties for a FIFO; compile + simulation decides which are accepted.

## Setup
    python3 -m venv .venv && source .venv/bin/activate     # Windows: use WSL
    pip install -r requirements.txt
    sudo apt install verilator                              # macOS: brew install verilator

## Free LLM options
A) Ollama (free, local, offline; default)
    # install from https://ollama.com, then:
    ollama pull qwen2.5-coder:7b        # ~5 GB; low RAM: qwen2.5-coder:3b
    python pipeline.py --llm ollama --model qwen2.5-coder:7b

B) Gemini free tier (needs internet + free key from https://aistudio.google.com/apikey)
    export GEMINI_API_KEY=...
    python pipeline.py --llm gemini     # override model: GEMINI_MODEL=<name>

C) No LLM at all (smoke test)
    python pipeline.py --llm mock

D) Paid Claude API (optional): export ANTHROPIC_API_KEY=... ; pip install anthropic ; python pipeline.py --llm claude

Outputs: out/accepted_assertions.sv, out/report.json
