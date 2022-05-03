class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string x;
        for(char c : s)
        {
            if(st.size() && abs(c - st.top()) == 32 ) st.pop();
            else 
            {
                st.push(c);
            }
        }
        while(st.size())
        {
            x.push_back(st.top());
            st.pop();
        }
        reverse(begin(x),end(x));
        return x;
    }
};