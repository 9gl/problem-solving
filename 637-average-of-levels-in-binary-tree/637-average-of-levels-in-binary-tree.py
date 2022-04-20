# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bfs(self,root):
        l = []
        if not root:
            return []
        q = [root]
        while q:
            som = 0
            sz = len(q)
            for i in range(sz):
                node = q.pop(0)
                som += node.val
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            l.append(som / sz)
        return l
            
        
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        return self.bfs(root)