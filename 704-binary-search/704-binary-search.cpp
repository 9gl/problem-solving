class Solution {
public:
    int search(vector<int>& nums, int t) {
        int h(nums.size()-1), l(0);
        while(l<=h)
        {
            int mid = (h+l)/2;
            if(nums[mid] == t) return mid;
            else if(nums[mid] < t) l=mid+1;
            else h = mid - 1;
        }
        return nums.size() == 0 && nums[0] == t ? 0 : -1;
    }
};