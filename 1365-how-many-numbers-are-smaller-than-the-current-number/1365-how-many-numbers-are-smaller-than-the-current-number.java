class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int sz = nums.length;
        int[] arr = new int[sz];
        for(int i = 0; i < sz; i++){
            int num = nums[i];
            int count = 0;
            for(int j = 0; j < sz; j++){
                if(num > nums[j]){
                    count++;
                }
            }
            arr[i] = count;
        }
        return arr;
    }
}