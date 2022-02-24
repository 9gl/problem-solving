class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char& c : s)
        {
            if(st.size() != 0 and st.top() == c) st.pop();
            else st.push(c);
            
        }
        string res;
        while(st.size())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(begin(res),end(res));
        return res;
    }
};