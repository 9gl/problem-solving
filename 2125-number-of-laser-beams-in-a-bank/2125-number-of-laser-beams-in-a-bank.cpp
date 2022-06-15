class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sz  = bank.size(), pre(0), res(0);
        for(string &s : bank)
        {
            int cnt(0);
            for(char& ch : s)
            {
                if(ch == '1') cnt++;
            }
            if(cnt)
            {
                res += pre*cnt;
                pre = cnt;
            }
        }
        return res;
    }
};