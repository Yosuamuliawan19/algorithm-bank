# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        
        self.ans = [[]]
        def dfs(node, d):
            if (not node):
                return 
            
            
            if (node.left):
                dfs(node.left, d+1)
                
            while (len(self.ans) <= d):
                self.ans.append([])
                
            self.ans[d].append(node.val)
            
            if (node.right):
                dfs(node.right, d+1)
                
        dfs(root, 0)
        return self.ans