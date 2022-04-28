class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int mx(A[0]), som(0);
        for(int x : A)
        {
            som+=x;
            mx = max(mx, som);
            som = max(som,0);
        }
        return mx;
    }
};