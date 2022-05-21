class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp = [0] * 26
        if len(s) != len(t):
            return False
        for i in range(len(s)):
            mp[ord(s[i]) - ord('a')] += 1
            mp[ord(t[i]) - ord('a')] -= 1
        for i in s:
            if(mp[ord(i) - ord('a')]) > 0:
                return False
        return True