# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        
        if not root:
            return False
        
        self.ans = True
        
        def dfs(node):
            if not node or not self.ans:
                return [-1e10, 1e10]
            
            # explore left & right subtree, check if max and min from both is valid
            max_l, max_r, min_l, min_r = -1e10, -1e10, 1e10, 1e10
            if node.left:
                max_l, min_l = dfs(node.left)
                
            if node.right:
                max_r, min_r = dfs(node.right)      
                    
                    
            # checking if valid
            if max_l >= min_r or max_l >= node.val or node.val >= min_r :
                # print(max_l,min_l,node.val,  max_r, min_r)
                self.ans = False
                
            # return the max and min value of the subtree        
            mx = node.val
            if node.left:
                mx = max(max_l, mx)
            if node.right:
                mx = max(max_r, mx)
                
            mn = node.val
            if node.left:
                mn = min(min_l, mn)
            if node.right:
                mn = min(min_r, mn)
            
            return [mx, mn]
        
        dfs(root)
        
        return self.ans