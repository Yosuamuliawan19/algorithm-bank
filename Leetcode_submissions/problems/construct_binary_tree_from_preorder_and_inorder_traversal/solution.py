from collections import defaultdict
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, pre: List[int], ino: List[int]) -> Optional[TreeNode]:
        
        
        # preoder -> now, rec(now.left), rec(now.right)
        # inorder -> rec(now.left), now, rec(now.right) 
        '''
        [3,9,20,15,7], [9,3,15,20,7]
         ^                ^
           ^ ^         ^      ^

        
        '''
        # need to check if a is in left or right
        n = len(pre)
        
        in_mp = defaultdict(int)
        for i, node in enumerate(ino): in_mp[node] = i
    
        global next_idx 
        next_idx = 0 
        
        def dfs(a, l, r):
            global next_idx

            # base case
            if l == r: 
                return TreeNode(pre[a])
                
            root = TreeNode(pre[a])            
            b = in_mp[pre[a]]
        
            if next_idx + 1 < n and l <= in_mp[pre[next_idx + 1]] <= b-1 :   
                next_idx += 1
                root.left = dfs(next_idx, l, b-1)
            if next_idx + 1 < n and b+1 <= in_mp[pre[next_idx + 1]] <= r : 
                next_idx += 1
                root.right = dfs(next_idx, b+1, r)
            return root

        return dfs(0, 0, n-1)
        
        
            
        
        
            
        
        