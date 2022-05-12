class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> map;
        int sz(nums.size());
        for(vector<int>& v : nums)
        {
            for(int &n : v)
            {
                map[n]++;
            }
        }
        vector<int> v;
        for(auto [f,s] : map)
        {
            if(s == sz) v.push_back(f);
        }
        return v;
    }
};