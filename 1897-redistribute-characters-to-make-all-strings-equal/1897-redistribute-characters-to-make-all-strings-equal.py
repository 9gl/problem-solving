class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int mp[26] = {};
        for(string& word : words)
        {
            for(char& ch : word) mp[ch - 'a']++;
        }
        return all_of(begin(mp),end(mp),[&](int c){return c % words.size() == 0;});
    }
};