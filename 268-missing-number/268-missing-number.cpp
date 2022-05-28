class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i(0), res(nums.size());
        for(int& n : nums)
        {
            res ^= n;
            res ^= i;
            i++;
        }
        return res;
    }
};