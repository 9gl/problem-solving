class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int start(0), end(nums.size()), left, right;
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] >= t) end = mid;
            else start = mid + 1;
        }
        left = start;
        start = 0, end = nums.size();
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > t) end = mid;
            else start = mid + 1;
        }
        right = start;
        if(left == right) return {-1,-1};
        else return {left, right - 1};
    }
};