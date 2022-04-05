class Solution {
public:
    int arrangeCoins(int n) {
        int start(0), end(n);
        while(start < end)
        {
            long int mid = start + (end - start) / 2;
            long int k = mid * (mid + 1) / 2;
            if(k > n) end = mid;
            else start = mid + 1;
        }
        return n== 1 ? 1: end-1;
    }
};