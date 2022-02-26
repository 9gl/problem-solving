class Solution:
    def search(self, nums: List[int], t: int) -> int:
        h,l = len(nums) - 1, 0
        while (l<=h):
            mid = h+l // 2
            if(nums[mid] == t):
                return mid
            elif (nums[mid] < t) :
                l = mid + 1
            elif (nums[mid] > t):
                h = mid - 1
        return -1
                
            