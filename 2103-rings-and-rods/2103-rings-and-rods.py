class Solution {
public:
    int countPoints(string rings) {
        int sz(rings.size());
        vector<set<char>> arr(10);
        for(int i = 0; i < sz - 1 ; i+=2)
        {
            char ch = rings[i];
            int n = rings[i+1] - '0';
            arr[n].insert(ch);
        }
        int cnt(0);
        for(int i = 0; i < 10; i++)
        {
            if(arr[i].size() == 3 ) cnt++;
        }
        return cnt;
    }
};