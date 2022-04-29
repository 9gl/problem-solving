class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int ele(0), sz(popped.size());
        for(int p : pushed)
        {
            st.push(p);
            while(st.size() && ele < sz && st.top() == popped[ele] )
            {
                st.pop();
                ele++;
            }
        }
        return ele == sz;
    }
};