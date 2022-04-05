class Solution:
    def arrangeCoins(self, n: int) -> int:
        start,end = 0,n
        while start < end:
            mid = start + (end - start) // 2
            k = mid * (mid+1) // 2
            if k > n:
                end = mid
            else:
                start = mid + 1
        return 1 if n==1 else end - 1