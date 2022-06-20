class Solution {
    public int[] buildArray(int[] nums) {
        int sz = nums.length;
        int[] arr = new int[sz];
        for(int i = 0; i < sz; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
}