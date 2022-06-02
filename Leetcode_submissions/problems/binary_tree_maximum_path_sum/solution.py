# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        
        
        
        # max path of current is node.val + left + right
        # return node.val + max(left, right)
        
        
        
        self.ans = -1001       
        
        
        def dfs(node):
            if not node: return 0
            
            left = dfs(node.left)
            right = dfs(node.right)

            self.ans = max(self.ans,  node.val + left + right)
            return max(node.val + max(left, right), 0)
    
        dfs(root)
        
        return self.ans