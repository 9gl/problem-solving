class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        l = []
        for i in arr:
            if i == 0:
                l.append(0)
            l.append(i)
        arr[:] = l[:len(arr)]