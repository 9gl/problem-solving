class Solution:
    def minOperations(self, b: str) -> List[int]:
        sz = len(b)
        pre, suff = [0]*sz,[0]*sz
        pre[0] = 0
        suff[sz-1] = 0
        cnt = 0
        for i in range(1,sz):
            if b[i-1] == '1':
                cnt += 1
            pre[i] = pre[i-1] + cnt
        cnt = 0
        for i in range(sz-2,-1,-1):
            if b[i+1] == '1':
                cnt+=1
            suff[i] = suff[i+1] + cnt
        l = [0] * sz
        for i in range(sz):
            l[i] = pre[i]+suff[i]
        return l
            
        