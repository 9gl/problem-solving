class Solution:
    def heightChecker(self, h: List[int]) -> int:
        
        return sum(1 for i in range(len(h)) if h[i] !=sorted(h)[i])