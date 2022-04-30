class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')')
            {
                int top = st.top();
                st.pop();
                reverse(begin(s) + top + 1, begin(s)+i );
            }
        }
        string res;
        for(char c : s)
        {
            if(c != '(' && c != ')') res.push_back(c);
        }
        return res;
    }
};