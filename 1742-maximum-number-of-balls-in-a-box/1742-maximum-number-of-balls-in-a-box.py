class Solution:
    def countBalls(self, l: int, h: int) -> int:
        mp = [0] * 46
        for i in range(l,h+1):
            som,n = 0,i
            while n > 0:
                som += n % 10
                n =n // 10
            mp[som]+=1
        return max(mp)
            