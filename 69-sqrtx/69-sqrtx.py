class Solution:
    def mySqrt(self, x: int) -> int:
        start, end = 1, x + 1
        while start < end:
            mid = start + (end - start) // 2
            if mid * mid > x:
                end = mid 
            else:
                start = mid + 1
        return end - 1