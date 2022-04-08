class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        return sum((1 for i in list(chain(*grid)) if i < 0))