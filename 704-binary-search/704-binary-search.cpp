class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h(nums.size() - 1), l(0); 
        while(l <= h)
        {
            int mid = h+l / 2;
            if(nums[mid] == target) 
            {
                return mid;
            }
            else if(nums[mid] < target) 
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return -1;
    }
};