class Solution:
    def nextGreatestLetter(self, A: List[str], t: str) -> str:
        start,end = 0, len(A)
        while start < end:
            mid = start + (end - start) // 2 
            if(A[mid] > t):
                end = mid
            else:
                start = mid + 1
        return A[start % len(A)]