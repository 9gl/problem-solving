class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        mp = sorted([(no,row.count(1)) for no, row in enumerate(mat)], key = lambda x : x [1])
        return [ele[0] for ele in mp][:k]