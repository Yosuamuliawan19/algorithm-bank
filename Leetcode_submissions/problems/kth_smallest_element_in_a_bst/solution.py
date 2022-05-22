# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        
        
        self.ans = None
        self.cnt = 0
        
        def dfs(node):
            if self.cnt == k or node == None:
                return 
            if node.left: dfs(node.left)
            
            if self.cnt < k:
                self.cnt += 1
                self.ans = node.val
            
            if node.right: dfs(node.right)
        
        dfs(root)
        return self.ans