class Solution {
public:
    int sumOfDigits(int n)
    {
        int res(0);
        while(n > 0)
        {
            res += n % 10;
            n /= 10;
        }
        return res;
    }
    int countLargestGroup(int n) {
        int freq[37] = {};
        int mx = INT_MIN;
        for(int i = 1; i < n+1; i++)
        {
            
            freq[sumOfDigits(i)]++;
            mx = max(freq[sumOfDigits(i)], mx);
        }
        int cnt(0);
        for(int& x : freq)
            if(x == mx) cnt++;
        return cnt;
    }
};