class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = {}
        for i in s:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        for ind,i in enumerate(s):
            if(d[i] == 1) :return ind
        return -1