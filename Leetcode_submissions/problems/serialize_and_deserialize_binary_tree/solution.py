# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    
    # convert to arr
    def dfs_serialize(self, node):
        if not node:
            self.arr.append('n')
            return 
        self.arr.append(str(node.val))
        self.dfs_serialize(node.left)       
        self.dfs_serialize(node.right)
    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        
        if not root:
            return ''
        self.arr = []
        self.dfs_serialize(root)
        # convert to string
        return ','.join(self.arr)
    
    
    def dfs_deserialize(self):
        if self.idx >= self.n:
            return None
        
        if  self.arr[self.idx] == 'n':
            self.idx +=1 
            return None
        node = TreeNode(int(self.arr[self.idx]))
        self.idx += 1
        
        node.left = self.dfs_deserialize()
        node.right = self.dfs_deserialize()
        return node
    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        if data == '':
            return None
        
        # convert to arr
        self.arr = data.split(',')
        self.n = len(self.arr)
        self.idx = 0
        # convert to binary tree
        return self.dfs_deserialize()
            
        
        
        
        
        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))