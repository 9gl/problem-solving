class Solution {
public:
    bool isPerfectSquare(int num) {
        int start(1);long int end(num);
        while(start < end)
        {
            long int mid = start + (end - start) / 2;
            if(mid * mid > num) end = mid;
            else start = mid + 1;
        }
        return (end - 1) * (end - 1) == num || num == 1;
    }
};