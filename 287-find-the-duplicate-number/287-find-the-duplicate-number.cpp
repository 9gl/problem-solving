class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int x : nums) map[x]++;
        for(auto [f,s] : map)
        {
            if(s > 1) return f;
            // cout << i.first << i.second;
        }
        return -1;
    }
};