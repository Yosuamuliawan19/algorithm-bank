# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
    
        
        
        self.ans = 0 
        
        def dfs(node, prev):
        
            if not node:
                return 
            
            d1, d2 = 0, 0
            if node.left:
                d1 = dfs(node.left, prev)
            if node.right:
                d2 = dfs(node.right, prev)
                
            self.ans = max(self.ans, (d1-prev)+(d2-prev))
            return 1 + max(d1, d2)
                
        dfs(root, 0)
        return self.ans
        