# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if (p == None and q == None):
            return True
        
        self.ans = True
        def dfs(l, r):
            if (l == None and r != None) or (l != None and r == None):
                self.ans = False
                return 
            if (l.left == None and r.left != None) or (l.left != None and r.left == None):
                self.ans = False
                return 
            
            if (l.right == None and r.right != None) or (l.right != None and r.right == None):
                self.ans = False
                return 
            
            
            
            
            
            if (l.val != r.val):
                self.ans = False
            if (l.left):
                dfs(l.left, r.left)
            if (l.right): 
                dfs(l.right, r.right)
        dfs(p,q)
        return self.ans