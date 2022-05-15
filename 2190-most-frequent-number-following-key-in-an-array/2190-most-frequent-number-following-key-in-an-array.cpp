class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int map[1001] =  {};
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == key) map[nums[i+1]]++;
        }
        int max_cnt(0), res(0);
        for(int i = 0; i < 1001; i++)
        {
            if(max_cnt < map[i])
            {
                max_cnt = map[i];
                res = i;
            }
        }
        return res;
    }
};