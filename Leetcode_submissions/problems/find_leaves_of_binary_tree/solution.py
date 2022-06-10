# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findLeaves(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        
        
        ans = []
        
        vis = set()
        
        def dfs(node):
            if not node: return -1
            l = dfs(node.left) + 1
            r = dfs(node.right) + 1
            d = max(l, r)
            
            # if node.val not in vis:
            while len(ans) <= d :
                ans.append([])
            ans[d].append(node.val)
            vis.add(node.val)
                
            return d
            
        dfs(root)
        
        return ans 
        
        
        
        
        
        
        
        
        