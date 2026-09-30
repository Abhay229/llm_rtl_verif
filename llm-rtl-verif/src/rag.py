import re
from pathlib import Path
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity


class Retriever:
    """TF-IDF retriever over SVA reference chunks (swap in embeddings later if needed)."""

    def __init__(self, corpus_dir):
        self.chunks = []
        for p in sorted(Path(corpus_dir).glob("*.md")):
            for sec in re.split(r"(?m)^## ", p.read_text()):
                sec = sec.strip()
                if sec and not sec.startswith("# "):
                    self.chunks.append(sec)
        self.vec = TfidfVectorizer(ngram_range=(1, 2), token_pattern=r"[A-Za-z_$][A-Za-z0-9_$]*")
        self.mat = self.vec.fit_transform(self.chunks)

    def query(self, text, k=4):
        sims = cosine_similarity(self.vec.transform([text]), self.mat)[0]
        return [self.chunks[i] for i in sims.argsort()[::-1][:k]]
