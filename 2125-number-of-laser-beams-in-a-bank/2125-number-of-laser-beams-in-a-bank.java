class Solution {
    public int numberOfBeams(String[] bank) {
        int res = 0 , pre = 0;
        for(String s : bank)
        {
            int cnt = 0;
            for(int i = 0; i < s.length(); i++)
            {
                if(s.charAt(i) == '1')
                {
                    cnt++;
                }
            }
            if(cnt > 0)
            {
                res += cnt * pre;
                pre = cnt;
            }
        }
        return res;
    }
}