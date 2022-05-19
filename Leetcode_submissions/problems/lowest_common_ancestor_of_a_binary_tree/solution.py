# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        self.lca = None
        
        def dfs(root):
            
            if not root or self.lca:
                return 0
        
            ans = 0
            
            if root == p:
                ans = ans | 1
            
            if root == q:
                ans = ans | 2
            
            if root.left:
                ans = ans | dfs(root.left)
            
            if root.right: 
                ans = ans | dfs(root.right)
    
            if ans == 3 and not self.lca:
                self.lca = root
            
            return ans
        
        dfs(root)
        
        return self.lca
            
            