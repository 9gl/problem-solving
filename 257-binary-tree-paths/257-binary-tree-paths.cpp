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
    void dfs(TreeNode* root, vector<string>& v, string t)
    {
        if(!root->left && !root->right) 
        {
            v.push_back(t);
            return ;
        }
        if(root->left) dfs(root->left, v, t+"->"+to_string(root->left->val));
        if(root->right) dfs(root->right, v,t+"->"+to_string(root->right->val));
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        if(!root) return {};
        dfs(root, v, to_string(root->val));
        return v;
    }
};