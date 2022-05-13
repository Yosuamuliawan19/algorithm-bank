"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if (not node):
            return None
        
        self.vis = set()
        self.clone = Node(node.val, [])
                
        self.locations = {node.val: self.clone}
        def dfs(node, clone_loc):
            for i in range(len(node.neighbors)):
                if (node.neighbors[i].val not in self.locations):
                    self.locations[node.neighbors[i].val] = Node(node.neighbors[i].val, [])
                
                nxt = self.locations[node.neighbors[i].val]
                if (node.val, nxt.val) not in self.vis:
                    self.vis.add((node.val, nxt.val))
                    self.vis.add((nxt.val, node.val))
                    clone_loc.neighbors.append(nxt)
                    nxt.neighbors.append(clone_loc)
                    dfs(node.neighbors[i], nxt)
        dfs(node, self.clone)
        
        return self.clone