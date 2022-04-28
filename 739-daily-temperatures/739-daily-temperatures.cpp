class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> st;
        vector<int> v(t.size(),-1);
        for(int i = t.size()-1; i >= 0; i--)
        {
            while(st.size() && st.top().first <= t[i]) st.pop();
            if(st.empty()) v[i] = 0; 
            else v[i] = st.top().second - i ;
            st.push({t[i], i});
        }
        return v;
    }
};