class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int& x: nums ) map[x]++;
        for(auto& [f,s] : map)
        {
            if(s % 2 == 1) return false;
        }
        return true;
    }
};