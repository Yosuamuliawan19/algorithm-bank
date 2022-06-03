# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        
        self.ans = 0        
        prefixSum = []
        
        def dfs(node):
            
            if not node: return 
            
            if len(prefixSum) == 0: prefixSum.append(node.val)
            else: prefixSum.append(prefixSum[-1] + node.val)
                
            dfs(node.left)
            dfs(node.right)
            
            # do prefix sum here 
            n = len(prefixSum)
            for i in range(n):
                cur = prefixSum[-1] -(prefixSum[i-1] if i!= 0 else 0)
                if cur == targetSum: self.ans += 1 
            
            prefixSum.pop()
            
        dfs(root)
        
        return self.ans
        
            