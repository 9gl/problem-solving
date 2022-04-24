class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<string> st;
        for(int i = 1; i <= n ; i++)
        {
            if(count(begin(target),end(target), i) > 0) st.push("Push");
            else if(target[target.size() -1] < i) break;
            else
            {
                st.push("Push");
                st.push("Pop");
            }
            
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