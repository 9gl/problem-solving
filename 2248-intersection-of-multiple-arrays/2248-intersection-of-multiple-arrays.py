class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        mp = [0] * 1001
        for arr in nums:
            for n in arr:
                mp[n] += 1
        res = []
        for i in range(len(mp)):
            if mp[i] == len(nums):
                res.append(i)
        return res