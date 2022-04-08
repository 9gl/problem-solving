class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i(0), j(nums.size() - 1);
        while (i < j)
        {
            int mid = nums[i] + nums[j];
            if(mid == target) return {i+1,j+1};
            else if(mid < target) i++;
            else j--;
        }
        return {-1,-1};
    }
};