class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count = 0;
        int sz = nums.length;
        for(int i = 0; i < sz - 1; i++){
            for(int j = i+1; j < sz; j++ ){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
}