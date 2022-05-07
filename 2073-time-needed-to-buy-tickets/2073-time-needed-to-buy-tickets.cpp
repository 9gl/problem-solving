class Solution:
    def timeRequiredToBuy(self, A: List[int], k: int) -> int:
        time = 0
        while A[k] != 0:
            for ind ,_ in enumerate(A):
                if A[k] == 0:
                    break
                elif A[ind] != 0:
                    time+=1
                    A[ind] -=1
        return time
                