class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        int map[1001]  = {};
        for(int& n : nums) map[n]++;
        while(o <= 1000 && map[o]) o*=2;
        return o;
    }
};