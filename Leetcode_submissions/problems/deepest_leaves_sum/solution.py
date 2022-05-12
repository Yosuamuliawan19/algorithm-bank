# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        
        depths = []
        def dfs(node, depth, depths):
            if len(depths) < depth:
                depths.append(node.val)
            else:
                depths[depth-1] += node.val
            if (node.left):
                dfs(node.left, depth+1, depths)
            if (node.right):
                dfs(node.right, depth+1, depths)
            
        dfs(root, 1, depths)
        return depths[-1]