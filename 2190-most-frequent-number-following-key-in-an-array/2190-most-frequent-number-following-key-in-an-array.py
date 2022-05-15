class Solution:
    def mostFrequent(self, nums: List[int], key: int) -> int:
        mp = [0] * 1001
        for i in range(len(nums)-1):
            if nums[i] == key:
                mp[nums[i+1]]+=1
        max_cnt, res = 0,0
        for i in range(len(mp)):
            if max_cnt < mp[i]:
                max_cnt = mp[i]
                res = i
        return res
        