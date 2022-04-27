class Solution {
public:
    stack<char> helper(string s)
    {
        stack<char> st;
        for(char c : s)
        {
            if(c != '#') st.push(c);
            else if(!st.empty()) st.pop();
        }
        return st;
    }
    bool backspaceCompare(string s, string t) {
        return helper(s) == helper(t);
    }
};