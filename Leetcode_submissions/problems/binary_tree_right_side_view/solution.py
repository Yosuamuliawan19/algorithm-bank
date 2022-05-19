# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        
        
        
        
        ans = []
        
        
        def dfs(root, d):
            if not root:
                return 
            
            if root.left:
                dfs(root.left, d+1)
            
            if root.right: 
                dfs(root.right, d+1)
            
            while d >= len(ans):
                ans.append(0)
                
            ans[d] = root.val
        
        dfs(root, 0)
        
        return ans
        
        
        
        