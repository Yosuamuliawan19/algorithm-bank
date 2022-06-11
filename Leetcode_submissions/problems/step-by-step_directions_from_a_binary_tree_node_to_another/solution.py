# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDirections(self, root: Optional[TreeNode], startValue: int, destValue: int) -> str:
        
        
        
        '''
        dfs(node, down_str, up_str):
        
        UU RL, UU
        
        
        dfs(left)
        
        '''
        lca = None
        
        def findLCA(node):
            nonlocal lca
            if not node or lca != None: return False, False
            hasS, hasD = (node.val == startValue), (node.val == destValue)
            
            a, b = findLCA(node.left)
            hasS, hasD = hasS or a, hasD or b
            
            a, b = findLCA(node.right)
            hasS, hasD = hasS or a, hasD or b

            if hasS and hasD and not lca:  
                lca = node
                            
            return hasS, hasD
        
        def findDest(node):
            if not node: return 'x'
            
            if node.val == destValue:
                return ''
            
            l = findDest(node.left) 
            if l != 'x':
                return 'L' + l
            r = findDest(node.right)
            if r != 'x':
                return 'R' + r
            
            return 'x'
            
            
        def findStart(node):
            if not node: return float('-inf')
            if node.val == startValue:
                return 0
            
            a = findStart(node.left) + 1
            if a >= 0:
                return a
        
            b = findStart(node.right) + 1
            if b >= 0:
                return b
            
            return float('-inf')
            
        findLCA(root)
        d = findStart(lca)
        rest = findDest(lca)
        
        return d*'U' + rest
        
        
        
        
        
        