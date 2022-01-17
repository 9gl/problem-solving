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
    int r = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;
        rangeSumBST(root->left, low, high);
        if(low <= root->val && root->val <= high) r += root->val;
        rangeSumBST(root->right, low , high);
        return r;
    }
};