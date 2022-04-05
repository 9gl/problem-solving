class Solution:
    def searchRange(self, nums: List[int], t: int) -> List[int]:
        start,end = 0, len(nums)
        while start < end:
            mid = start + (end - start) // 2
            if nums[mid] >= t:
                end = mid 
            else:
                start = mid + 1
        left = start 
        start,end = 0, len(nums)
        while start < end:
            mid = start + (end - start) // 2
            if nums[mid] > t:
                end = mid 
            else:
                start = mid + 1
        right = start 
        return [-1,-1] if left == right else [left,right-1]