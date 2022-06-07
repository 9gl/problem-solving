class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        start, end = 0, len(arr)
        while start < end:
            mid = start + (end - start) // 2;
            if arr[mid] - 1 - mid < k:
                start = mid + 1
            else:
                end = mid
        return start + k