# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        
        # base case
        if root == None or subRoot == None:
            if root == subRoot:
                return True
            return False
        
        # init global variables
        self.hasSame = False
        self.subRoot = subRoot
        
        def isLeaf(x):
            if not x:
                return False
            if not x.left and not x.right:
                return True
            return False
            
            
        def isSame(x, y):
            if x == None and y == None: 
                return True
        
            # check disparity between containing left and right
            if (x.left == None and y.left != None) or (x.left != None and y.left == None) \
                or  (x.right == None and y.right != None) or (x.right != None and y.right == None):
                return False
            
            return isSame(x.left, y.left) and isSame(x.right, y.right) and x.val == y.val
            
        
        def traverse(root):
            
            if not root or self.hasSame:
                return 
            
            if root.val == self.subRoot.val:
                self.hasSame = self.hasSame or isSame(root, self.subRoot)
            
            if root.left:
                traverse(root.left)
            
            if root.right:
                traverse(root.right)
        
        traverse(root)
        
        return self.hasSame