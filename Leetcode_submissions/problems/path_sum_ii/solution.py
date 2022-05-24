# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        
        if not root:
            return []
        
        ans = []
        
        cur = []
        def dfs(node, cnt):

            if not node.left and not node.right:
                if cnt + node.val == targetSum:
                    cur.append(node.val)
                    ans.append(cur.copy())
                    cur.pop()
                return 
            
            if node.left:
                cur.append(node.val)
                dfs(node.left, cnt + node.val)
                cur.pop()
            
            if node.right:
                cur.append(node.val)
                dfs(node.right, cnt + node.val)
                cur.pop()
                
        dfs(root, 0)
        return ans 