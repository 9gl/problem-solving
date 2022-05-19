class Solution {
public:
    string sortString(string s) {
        int alpha[26] = {};
        for(char& c : s) alpha[c - 'a']++;
        string res = "";
        while(s.size()!=res.size())
        {
            for(int i = 0; i < 26; i++)
            {
                if(--alpha[i] >= 0)
                {
                    res += i + 'a';
                }
            }
            for(int i = 25; i >= 0; i--)
            {
                if(--alpha[i] >= 0)
                {
                    res += i + 'a';
                }
            }
        }
        return res;
            
    }
};