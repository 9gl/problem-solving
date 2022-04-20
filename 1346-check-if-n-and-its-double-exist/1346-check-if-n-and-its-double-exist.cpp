class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(int n: arr)
        {
            if(set.count(2*n) || !(n%2) && set.count(n/2))
                return true;
            set.insert(n);
        }
        return false;
    }
};