class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        mp = [0] * 26
        for word in words:
            for ch in word:
                mp[ord(ch) - ord('a')]+=1
        return all(x % len(words) == 0 for x in mp)