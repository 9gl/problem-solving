class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> v(prices);
        for(int i =0; i < prices.size(); i++)
        {
            int p = prices[i];
            while(st.size() && prices[st.top()] >= p)
            { 
                v[st.top()] -= p;
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};