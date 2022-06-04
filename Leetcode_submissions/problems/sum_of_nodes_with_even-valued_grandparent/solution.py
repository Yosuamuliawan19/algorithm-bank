# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        
        if not root: return 0
        
        ans = 0
        
        def dfs(node, d, prev):
            if not node: return 
            
            if d-2 in prev:
                nonlocal ans 
                ans += node.val
            
            if node.val % 2 == 0: prev.add(d)
            dfs(node.left, d+1, prev)
            dfs(node.right, d+1, prev)
            if node.val % 2 == 0: prev.remove(d)
        
        prev = set()
        if root.val % 2 == 0: prev.add(0)
        dfs(root, 0, prev)
        return ans 