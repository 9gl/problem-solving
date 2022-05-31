class Solution:
    def arrayPairSum(self, A: List[int]) -> int:
        A.sort()
        return sum(min(A[i], A[i+1]) for i in range(0,len(A),2))