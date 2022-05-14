# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        self.ans = None
        
        def dfs(node, a, b):
            if self.ans != None:
                return [a, b]
            if not node: 
                return [a, b]
            if (node.val == p.val):
                a = True
            if (node.val == q.val):
                b = True
                
        
            x1,y1 = dfs(node.left, a, b)
            x2,y2 = dfs(node.right, a, b)
            if (x1 and y2) or (y1 and x2):
                self.ans = node
                return [True, True]
            
            
            return (a or x1 or x2, b or y1 or y2)
        dfs(root, False, False)
        return self.ans
        
        
        
            