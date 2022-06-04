class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        
        parent = {}
        st = set()
        
        for i in range(n): parent[i] = i
        
        def getParent(i): 
            if parent[i] != i: parent[i] = getParent(parent[i])
            return parent[i]
        
        def unify(a, b):
            x, y = getParent(a), getParent(b)
            if x != y:
                if x < y: parent[y] = x
                else: parent[x] = y
          
        cablesLeft = 0
        for edge in connections: 
            x, y = getParent(edge[0]), getParent(edge[1])
            if x != y: unify(edge[0], edge[1])
            else: cablesLeft += 1
        
        for i in range(n): st.add(getParent(i))
       
        cablesNeeded = len(list(st)) - 1 
        
        # print(st)
        # print(cablesLeft, cablesNeeded)
    
        if cablesNeeded > cablesLeft: return -1
        return cablesNeeded
    