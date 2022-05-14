class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        mapc,res = Counter(chars),0
        for word in words:
            mapw = Counter(word)
            for c in mapw:
                if mapw[c] > mapc[c]:
                    break
            else:
                res+= len(word)
        return res
                
                
            