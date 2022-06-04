class Solution:
    def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
        
        
        parent = {}
        
        def getParent(i):
            if i not in parent: parent[i] = i
                
            if parent[i] != i: parent[i] = getParent(parent[i])
                
            return parent[i] 
            
        def unify(a, b):
            x, y = getParent(a), getParent(b)
            if x != y:
                if x < y: parent[y] = x
                else: parent[x] = y
                
        for edge in edges:
            x, y = getParent(edge[0]), getParent(edge[1])
            if x == y:
                return edge
            else:
                unify(edge[0], edge[1])
        
        return [0,0]
        