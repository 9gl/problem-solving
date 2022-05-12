class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int map[1001] = {};
        for(vector<int>& arr : nums)
        {
            for(int& n : arr) map[n]++;
        }
        vector<int> v;
        int sz(nums.size());
        for(int i = 0; i < 1001; i++)
        {
            if(map[i] == sz) v.push_back(i);
        }
        return v;
    }
};