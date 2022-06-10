# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def inorderSuccessor(self, root: TreeNode, p: TreeNode) -> Optional[TreeNode]:
        
        
        
        found = False
        ans = None
        
        def dfs(node):
            nonlocal found
            nonlocal ans
            
            if ans: return
            if not node: return 
        
            dfs(node.left)
            if node.val == p.val: found = True
            if found and p.val != node.val and ans == None: ans = node
            dfs(node.right)
            
        dfs(root)
        
        return ans