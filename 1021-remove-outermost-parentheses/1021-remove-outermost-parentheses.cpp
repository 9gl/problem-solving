class Solution {
public:
    string removeOuterParentheses(string s) {
        string r = "";
        int open = 0;
        for(char c : s)
        {
            if(c == '(' && open++ > 0) r += c;
            else if(c == ')' && open-- > 1) r+=c;
        }
        return r;
    }
};