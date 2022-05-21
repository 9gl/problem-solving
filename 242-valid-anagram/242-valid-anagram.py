class Solution {
public:
    bool isAnagram(string s, string t) {
        int mp[26] = {};
        int n = s.size();
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size() ;i++)
        {
            mp[s[i] - 'a']++;
            mp[t[i] - 'a']--;
        }
        for(char& ch : s)
        {
            if(mp[ch - 'a'] > 0)
            {
                return false;
            }
        }
        return true;
    }
};