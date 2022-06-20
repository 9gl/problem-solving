class Solution {
    public int maximumWealth(int[][] A) {
        int max = 0;
        for(int i = 0; i < A.length ; i++){
            int sum = 0;
            for(int j = 0; j < A[i].length; j++){
                sum += A[i][j];
            }
            max = Math.max(sum, max);
        }
        return max;
    }
}