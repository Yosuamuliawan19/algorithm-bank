# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        
        
        # [0]
        # [0,1]
        # [0,1,2,3]
        # [0,1,2,3,4,5,6,7]
        
        
        
        mp = {}
        
        self.ans = 0
        
        def dfs(node, idx, d):
                
            if d not in mp:
                mp[d] = [float('inf'), float('-inf')]
                
            mp[d] = [min(mp[d][0], idx), max(mp[d][1], idx)]
            
            if mp[d][0] != float('inf') and mp[d][1] != float('-inf'):
                self.ans = max(self.ans, 1+mp[d][1]-mp[d][0])
            
            if node.left: dfs(node.left, idx*2, d+1)
            if node.right: dfs(node.right, idx*2 +1, d+1)
            
        dfs(root, 0, 0)
        return self.ans