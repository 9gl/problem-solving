class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(st.size() && st.top() == c) st.pop();
            else st.push(c);
        }
        string r = "";
        while(st.size())
        {
            r+=st.top();
            st.pop();
        }
        reverse(begin(r), end(r));
        return r;
    }
};