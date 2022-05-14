class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int mapc[26] = {}, res(0);
        for(char& c : chars) mapc[c - 'a']++;
        for(string& word : words)
        {
            int mapw[26] = {};
            bool flag(true);
            for(char& c : word)
            {
                mapw[c - 'a']++;
                if(mapw[c-'a'] > mapc[c - 'a'])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) res+=word.size();
        }
        return res;
    }
};