class Solution {
public:
    void reverse(vector<char>& s, int l, int r)
    {
        if(l >= r) return ;
        swap(s[l++],s[r--] );
        reverse(s, l, r);
    }
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }
};