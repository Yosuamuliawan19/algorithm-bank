# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        
        delete = set(to_delete)
        ans = set()
        
        def dfs(node):
            if not node: return 
            
            
            if node.val in delete: 
                if node.left and node.left.val not in delete: ans.add(node.left)
                if node.right and node.right.val not in delete: ans.add(node.right)
    
            
            dfs(node.left)
            if node.left and  node.left.val in delete: node.left = None
            dfs(node.right)
            if node.right and  node.right.val in delete: node.right = None
            
        if root and root.val not in delete: ans.add(root)
        dfs(root)
        
        return list(ans)