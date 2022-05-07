class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int sz = image.size();
        for(int i = 0; i < sz; i++)
        {
            reverse(begin(image[i]), end(image[i]));
            for(int& x : image[i]) x = 1^x;
        }
        return image;
    }
};