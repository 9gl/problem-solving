class Solution:
    def findFinalValue(self, nums: List[int], o: int) -> int:
        mp = [{}] * 1001
        for i in nums:
            mp[i] = True
        while o <= 1000 and mp[o]:
            o *= 2
        return o