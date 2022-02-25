class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(vector<int>& r : grid)
        {
            cnt += upper_bound(rbegin(r), rend(r), -1) - rbegin(r); 
        }
        return cnt;
    }
};