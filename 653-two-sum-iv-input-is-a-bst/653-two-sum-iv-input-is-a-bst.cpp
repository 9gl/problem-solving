/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void ino(TreeNode* root, vector<int>& v)
    {
        if(!root) return ;
        ino(root->left, v);
        v.push_back(root->val);
        ino(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        ino(root, v);
        int start(0), end(v.size()-1);
        while(start < end)
        {
            int mid = v[start] + v[end];
            if(mid == k) return true;
            else if(mid < k) start++;
            else end--;
        }
        return false;
    }
};