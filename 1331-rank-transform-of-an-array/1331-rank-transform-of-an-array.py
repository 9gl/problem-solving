class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int sz(arr.size());
        vector<int> v(arr);
        sort(begin(v),end(v));
        unordered_map<int,int> mp;
        for(int& n : v) mp.emplace(n, mp.size() + 1);
        for(int i = 0; i < sz ;i++) v[i] = mp[arr[i]];
        return v;
    }
};