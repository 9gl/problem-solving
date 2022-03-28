class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int start(0), end(nums.size());
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] >= t) end = mid ;
            else start = mid + 1;
        }
        return end;
    }
};