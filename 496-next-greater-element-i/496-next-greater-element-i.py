class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> map;
        for(int n : nums2)
        {
            while(st.size() && st.top() < n)
            {
                map[st.top()] = n;
                st.pop();
            }
            st.push(n);
        }
        vector<int> v;
        for(int n : nums1) v.push_back(map.count(n) ? map[n] : -1);
        return v;
            
    }
}; 