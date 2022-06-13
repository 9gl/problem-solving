class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sz = boxes.size();
        vector<int> v(sz);
        for(int i = 0; i < sz; i++)
        {
            int move(0);
            for(int j = 0; j < sz; j++)
            {
                if(boxes[j] == '1')
                {
                    move+=abs(i -j);
                }
            }
            v[i] = move;
        }
        return v;
    }
};