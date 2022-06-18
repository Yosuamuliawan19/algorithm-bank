# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minCameraCover(self, root: Optional[TreeNode]) -> int:
        
        '''
            r
         l,    r
        l, r  l,r
        
        
        
        What happens if near node == 1, in that case need to place it eitherway
        
        '''
        ans = 0
            
        def dfs(node):
            nonlocal ans
            
            if not node: return 1
            
            l = dfs(node.left)
            r = dfs(node.right)
            if l == 2 or r == 2:
                ans += 1
                return 0
            
            if l == 0 or r == 0:
                return 1
            
            
            return 2
        
            
        res = dfs(root)
        if res == 2: ans += 1
            
            
        return ans
            