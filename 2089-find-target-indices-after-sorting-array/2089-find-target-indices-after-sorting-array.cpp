class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int t) {
        vector<int> v;
        sort(begin(nums),end(nums));
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == t) v.push_back(i);
        }
        return v;
    }
};