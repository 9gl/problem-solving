class Solution:
    def maxSubArray(self, l: List[int]) -> int:
        mx = l[0]
        som = 0
        for i in l:
            som += i
            mx = max(som,mx)
            som = max(som,0)
        return mx