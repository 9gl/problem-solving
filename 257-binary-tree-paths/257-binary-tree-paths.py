# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root, l, s):
        if not root.left and not root.right:
            l.append(s)
            return 
        if root.left:
            self.dfs(root.left, l, s+"->"+str(root.left.val))
        if root.right:
            self.dfs(root.right, l, s+"->"+str(root.right.val))
    
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        if not root:
            return []
        r = []
        self.dfs(root, r, str(root.val))
        return r