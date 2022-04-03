class Solution {
public:
    int searchInsert(vector<int>& A, int t) {
        int start(0), end(A.size());
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(A[mid] >= t) end = mid;
            else start = mid + 1;
        }
        return end;
        
    }
};