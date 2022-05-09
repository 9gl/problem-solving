class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int sz = arr.size();
        for(int i = 0; i < sz; i++)
        {
            if(!arr[i])
            {
                arr.pop_back();
                arr.insert(begin(arr) + i, 0);
                i++;
            }
        }
    }
};