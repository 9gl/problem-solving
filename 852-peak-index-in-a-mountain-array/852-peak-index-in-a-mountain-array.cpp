class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int start(0), end(A.size());
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(A[mid] > A[mid+1]) end = mid ;
            else start = mid + 1;
        }
        return end;
    }
};