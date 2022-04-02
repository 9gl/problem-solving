class Solution {
public:
    bool help(string s, int i, int j)
    {
        while(i < j)
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i(0), j(s.size()-1);
        while(i < j)
        {
            if(s[i] != s[j]) return help(s, i, j -1) || help(s,i+1,j);
            i++;
            j--;
        }
        return true;
    }
};