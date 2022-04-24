class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        stack<string> st;
        int index = 0;
        for(int i = 1; i < t[t.size()-1]+1 ; i++)
        {
            st.push("Push");
            if(t[index] != i) st.push("Pop");
            else index++;  
        }
        vector<string> v;
        while(st.size())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(begin(v),end(v));
        return v;
    }
};