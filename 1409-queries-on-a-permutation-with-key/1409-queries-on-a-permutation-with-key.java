class Solution:
    def processQueries(self, q: List[int], m: int) -> List[int]:
        arr = [i for i in range(1, m+1)]
        r = [0] * len(q)
        for ind,i in enumerate(q):
            x = arr.index(i)
            r[ind] = x
            arr = [i] + arr[:x] + arr[x+1:]
        return r