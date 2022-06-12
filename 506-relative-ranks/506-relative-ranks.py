class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        l = sorted(score, reverse=True)
        pairs = []
        ranks = ["Gold Medal","Silver Medal","Bronze Medal"]
        for ind,s in enumerate(l):
            if ind < 3:
                pairs.append((s,ranks[ind]))
            else:
                pairs.append((s,str(ind+1)))
        r = [""] * len(score)
        for p in pairs:
            r[score.index(p[0])] = p[1]
        return r