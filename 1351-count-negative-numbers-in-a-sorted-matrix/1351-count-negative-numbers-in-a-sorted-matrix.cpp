class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int cnt = 0;
        for(auto& r : grid)
       {
           for(int& e : r)
           {
               if(e < 0) cnt+=1;
           }
       }
        return cnt;
    }
};