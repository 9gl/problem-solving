class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        lp = Counter(filter(lambda x : x.isalpha(), licensePlate.lower()))
        return min([w for w in words if Counter(w) & lp == lp], key=len) 
        