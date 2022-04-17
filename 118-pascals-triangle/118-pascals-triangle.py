class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l = [[1]]
        for i in range(1,numRows):
            l.append([1] * (i+1))
            for j in range(1, i):
                l[i][j] = l[i-1][j-1] + l[i-1][j]
        return l