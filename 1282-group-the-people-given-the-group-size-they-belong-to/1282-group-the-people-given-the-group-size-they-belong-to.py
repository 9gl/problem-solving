class Solution:
    def groupThePeople(self, gs: List[int]) -> List[List[int]]:
        count = collections.defaultdict(list)        
        r = []
        for i, size in enumerate(gs):
            count[size].append(i)
            if len(count[size]) == size:
                r.append(count.pop(size))
        return r