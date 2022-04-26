class Solution {
public:
    int minOperations(vector<string>& logs) {
        int times(0);
        for(string s : logs)
        {
            if(s == "../") times = max(0, times-1);
            else if(s == "./") continue;
            else times+=1;
        }
        return times;
    }
};