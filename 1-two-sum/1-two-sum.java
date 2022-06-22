class Solution {
    public int[] twoSum(int[] nums, int t) {
        int sz = nums.length;
        int[] arr = new int[2];
        for(int i = 0; i < sz - 1;i++){
            int x = t - nums[i];
            for(int j = i + 1; j < sz; j++){
                if(nums[j] == x){
                    arr[0] = i;
                    arr[1] = j;
                }
            }
        }
        return arr;
    }
}