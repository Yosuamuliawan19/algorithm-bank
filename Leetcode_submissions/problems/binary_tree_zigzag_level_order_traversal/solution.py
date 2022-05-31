# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        
        ans = []
        
        self.max_d = 0 
        
        def dfs(node, d):
        
            if not node:
                return
            
            self.max_d = max(self.max_d, d+1)
            
            while d >= len(ans):
                ans.append([])
                
            ans[d].append(node.val)
            
            if node.left:
                dfs(node.left, d+1)
                
            if node.right:
                dfs(node.right, d+1)
                
        dfs(root, 0)
        
        # print(ans, self.max_d)
        for i in range(self.max_d):
            if i % 2 != 0:
                ans[i] = reversed(ans[i])
        
        # print(ans, self.max_d)
        return ans
        
        
        