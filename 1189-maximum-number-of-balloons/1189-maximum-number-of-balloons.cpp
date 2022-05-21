class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp(26);
        for(char& ch : text) mp[ch]++;
        return min({mp['b'],mp['a'],mp['l'] / 2 ,mp['o'] / 2, mp['n']});
    }
};