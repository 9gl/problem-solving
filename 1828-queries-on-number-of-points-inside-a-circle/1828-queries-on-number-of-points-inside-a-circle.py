class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        l = [0] * len(queries)
        i = 0
        for q in queries:
            cnt = 0
            for p1, p2 in points:
                if (p1-q[0])**2 + (p2-q[1])**2 <= q[2]**2:
                    cnt+=1
            l[i]+=cnt
            i+=1
        return l
        