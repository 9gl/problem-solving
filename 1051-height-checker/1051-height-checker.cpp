class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> v(begin(h),end(h));
        sort(begin(v),end(v));
        int cnt(0), sz = h.size();
        for(int i = 0; i < sz; ++i)
        {
            if(v[i] != h[i]) ++cnt;
        }
        return cnt;
    }
};