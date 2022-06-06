class Solution {
public:
    int minimumSum(int num) {
        int digits[4] = {};
        for(int i = 0; i < 4; ++i, num /= 10) digits[i] = num % 10;
        sort(begin(digits),end(digits));
        return 10 * (digits[0] + digits[1]) + digits[2] + digits[3];
    }
};