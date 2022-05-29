class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        ban = set(banned)
        p = re.findall(r'\w+',paragraph.lower())
        return Counter(w for w in p if w not in ban).most_common()[0][0]