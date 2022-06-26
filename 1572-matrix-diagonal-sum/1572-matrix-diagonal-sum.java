class Solution {
    public int diagonalSum(int[][] mat) {
        int sum = 0;
        int sz = mat.length;
        for(int i = 0; i < sz; i++){
            int j = sz - i - 1;
            if(i != j) sum+=mat[i][i] + mat[i][j];
            else sum+=mat[i][j];
        }
        return sum;
    }
}