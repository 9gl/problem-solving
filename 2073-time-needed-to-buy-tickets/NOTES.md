```
class Solution {
public:
int timeRequiredToBuy(vector<int>& t, int k) {
int res(0), sz(t.size()), p(t[k]);
for(int i = 0; i < sz; i++)
{
if(i <= k) res+= min(t[k], t[i]);
else if(i > k) res+= min(t[k]-1,t[i]);
}
return res;
}
};
```