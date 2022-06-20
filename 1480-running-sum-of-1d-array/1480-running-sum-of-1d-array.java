class Solution {
    public int[] runningSum(int[] nums) {
        int sz = nums.length;
        int[] arr = new int[sz];
        arr[0] = nums[0];
        for(int i = 1; i < sz; i++){
            arr[i] = arr[i-1] + nums[i]; 
        }
        return arr;
    }
}