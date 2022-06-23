class Solution {
    public int[] shuffle(int[] nums, int n) {
        int sz = 2*n;
        int[] arr = new int[sz];
        int index = 0;
        for(int i = 0, j = n; i < n && j < sz; i++,j++){
            arr[index++] = nums[i];
            arr[index] = nums[j];
            index++;
        }
        return arr;
    }
}