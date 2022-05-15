# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        if not root:
            return 0
        
        def dfs(node):
            d = 0
            if node.left:
                d = max(d, dfs(node.left))
            if node.right:
                d = max(d, dfs(node.right))
        
            return d + 1
        
        return dfs(root)