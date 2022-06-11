class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        
        
        isValid = True
        vis = set()
        
        
        # from one of the leaves, dfs. If it sees same node twice, then its invalid
        
        
        adj = defaultdict(list)
        isLeaf = set([i for i in range(n)])
        for edge in edges:
            adj[edge[0]].append(edge[1])
            if len(adj[edge[0]]) > 1 and edge[0] in isLeaf: isLeaf.remove(edge[0])
                
            adj[edge[1]].append(edge[0])
            if len(adj[edge[1]]) > 1 and edge[1] in isLeaf: isLeaf.remove(edge[1])

                
        # print(len(isLeaf), 'isLeaf')
        if len(isLeaf) == 0: return False
        start = list(isLeaf)[0]
        self.ans = True
        def dfs(node, prev):
            vis.add(node)
        
            for next in adj[node]:
                if next in vis and next != prev:
                    self.ans = False
                    continue
                if next == prev: continue
                    
                dfs(next, node)
        dfs(start, -1)
        
        if len(vis) != n:
            return False
        # print(len(vis))
        
        return self.ans