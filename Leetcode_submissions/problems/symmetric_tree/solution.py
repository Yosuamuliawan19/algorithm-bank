# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:

        # inital checking
        if not root:
            return True
        if root.left == None and root.right == None: 
            return True
        if root.left == None or root.right == None:
            return False
            
        def isSame(left, right):
            if (left and not right) or (not left and right) or left.val != right.val:
                return False
            return True
        
        if not isSame(root.left, root.right):
            return False
        
        
        
        # start of algo
        q1, q2 = [root.left], [root.right]
        
        while (len(q1) != 0 and len(q2) != 0):
        
            l = q1.pop(0)
            r = q2.pop(0)
            
            if l == None or r == None:
                if l != r:
                    return False
                continue
            
            if l.val != r.val:
                return False
        
            q1.append(l.left)
            q1.append(l.right)

            q2.append(r.right)
            q2.append(r.left)
          
        if len(q1) != len(q1):
            return False
        
        return True