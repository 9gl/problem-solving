class Solution:
    def numberOfBeams(self, b: List[str]) -> int:
        l = []
        for s in b:
            cnt = 0
            for ch in s:
                if ch == '1':
                    cnt += 1
            if cnt != 0:
                l.append(cnt)
        r = 0
        j = 1
        for i in range(len(l)-1):
            r += l[i]*l[j]
            j+=1
        return r
            