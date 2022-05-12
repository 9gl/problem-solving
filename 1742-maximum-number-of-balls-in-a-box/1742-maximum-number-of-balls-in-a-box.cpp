class Solution {
public:
    int countBalls(int l, int h) {
        int map[46] = {};
        for(int i = l; i <= h; i++)
        {
            int sum(0),n(i);
            while(n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            map[sum]++;
        }
        return *max_element(begin(map),end(map));
    }
};