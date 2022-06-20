class Solution {
    public int[] getConcatenation(int[] nums) {
        int sz = nums.length;
        int[] arr = new int[sz*2];
        for(int i = 0; i < sz*2; i++){
            arr[i] = nums[i % sz];
        }
        return arr;
    }
}