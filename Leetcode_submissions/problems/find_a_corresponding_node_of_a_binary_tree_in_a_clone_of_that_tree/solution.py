# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:

        def dfs(a, b, target):
            if (a.val == target.val):
                return b
            
            if (a.left):
                found = dfs(a.left, b.left, target)
                if (found != None):
                    return found
            if (a.right):
                found = dfs(a.right, b.right, target)
                if (found != None):
                    return found
        
        return dfs(original, cloned, target)