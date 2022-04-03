class Solution:
    def mySqrt(self, x: int) -> int:
        s, e = 1, x + 1
        while s < e:
            mid = s + (e - s) // 2
            if mid * mid > x:
                e = mid 
            else:
                s = mid + 1
        return e-1