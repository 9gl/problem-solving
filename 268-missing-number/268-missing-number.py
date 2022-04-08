class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        return [i for i in range(n+1) if i not in nums][0]