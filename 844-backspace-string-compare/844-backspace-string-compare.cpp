class Solution {
public:
    stack<char> helper(string x)
    {
        stack<char> st;
        for(char c : x)
        {
            if(c!= '#') st.push(c);
            else if(st.size()) st.pop();
        }
        return st;
    }
    bool backspaceCompare(string s, string t) {
        return helper(s) == helper(t);
    }
};