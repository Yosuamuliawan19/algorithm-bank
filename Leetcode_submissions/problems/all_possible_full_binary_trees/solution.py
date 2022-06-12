# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def allPossibleFBT(self, n: int) -> List[Optional[TreeNode]]:
        
        
        @cache
        def dp(m):
            if m == 0:
                return [None]
            if m == 1:
                return [TreeNode()]
            m -= 1
    
            res = []
            for i in range(1, m, 2):
                left = dp(i)
                right = dp(m-i)
                for a in left:
                    for b in right:
                        res.append(TreeNode(0, a, b))
                        
            return res
        
        return dp(n)