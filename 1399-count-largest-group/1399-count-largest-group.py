class Solution:
    def sumOfDigits(self, n):
        res = 0
        while n > 0:
            res += n % 10
            n //= 10
        return res
    
    def countLargestGroup(self, n: int) -> int:
        mp = [0] * 37
        mx = 0
        for i in range(1,n+1):
            mp[self.sumOfDigits(i)] += 1
            mx = max(mx, mp[self.sumOfDigits(i)])
        return mp.count(mx)