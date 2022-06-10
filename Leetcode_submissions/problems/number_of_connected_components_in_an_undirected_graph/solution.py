class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        
        parent = [i for i in range(n)]
        st = set()

        def getParent(i):
            if parent[i] == i: return i
            parent[i] = getParent(parent[parent[i]])
            return parent[i]
        
        def unify(a, b):
            x, y = getParent(a), getParent(b)
            if x != y:
                if x < y: parent[x] = y
                else: parent[y] = x
    
        for edge in edges: unify(edge[0], edge[1])
        
        for i in range(n):  st.add(getParent(i))
        
        return len(list(st))