class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_set<string> ban(begin(banned),end(banned));
        unordered_map<string, int> mp;
        for(char& ch :p ) ch = isalpha(ch) ? tolower(ch) : ' ';
        istringstream iss(p);
        string w;
        pair<string, int> r("",0);
        while(iss >> w)
        {
            if(ban.find(w) == ban.end() && ++mp[w] > r.second)
                r = make_pair(w,mp[w]);
        }
        return r.first;
    }
};