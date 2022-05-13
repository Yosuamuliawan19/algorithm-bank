# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        self.ans = True
        
        def dfs(node, depth):
            if (not node or not self.ans):
                return 1e5
            d_left = dfs(node.left, depth) if node.left else 0
            d_right = dfs(node.right, depth) if node.right else 0
            diff = abs(d_left - d_right)
            
            if (diff > 1):
                self.ans = False
            
            return 1 + max(d_left, d_right)
        
        dfs(root, 0)
        
        return self.ans
                