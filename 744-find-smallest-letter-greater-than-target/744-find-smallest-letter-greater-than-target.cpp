class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
       int start(0), end(l.size());
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if(l[mid] > t) end = mid;
            else start = mid + 1;
        }
        return l[start % l.size()] ;
    }
};