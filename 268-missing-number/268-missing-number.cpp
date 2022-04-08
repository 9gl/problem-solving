class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i(0), res(nums.size());
        for(int& num : nums)
        {
            res ^= num;
            res ^= i;
            i++;
        }
        return res;
    }
};