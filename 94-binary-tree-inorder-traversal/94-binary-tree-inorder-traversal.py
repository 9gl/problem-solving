# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self,root):
        if root == None:
            return 
        self.inorder(root.left)
        self.v.append(root.val)
        self.inorder(root.right)
        
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        self.v = []
        self.inorder(root)
        return self.v