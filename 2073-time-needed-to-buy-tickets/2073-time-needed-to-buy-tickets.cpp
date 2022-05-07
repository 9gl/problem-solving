class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int time(0);
        while(t[k]!=0)
        {
            for(int i = 0; i < t.size(); i++)
            {
                if(t[k] == 0) break;
                else if(t[i] != 0)
                {
                    t[i]--;
                    time++;
                }
            }
        }
        return time;
    }
};