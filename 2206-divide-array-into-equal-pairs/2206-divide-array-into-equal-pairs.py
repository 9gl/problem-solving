class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        umap = {}
        for i in nums:
            if i not in umap:
                umap[i] = 1
            else:
                umap[i] += 1
        for k,v in umap.items():
            if v % 2:
                return False
        return True