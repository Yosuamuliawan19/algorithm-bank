class Solution:
    def possibleBipartition(self, n: int, dislikes: List[List[int]]) -> bool:
        
        
        color = [-1 for i in range(n)]
        
        adjList = {}
        
        for i in range(n): adjList[i] = set()
        
        for edge in dislikes:
            adjList[edge[0]-1].add(edge[1]-1)
            adjList[edge[1]-1].add(edge[0]-1)
        
        self.ans = True
        
        def bipartite(node, c):
            color[node] = c
            for next in list(adjList[node]):
                if color[next] == -1: 
                    bipartite(next, 2 if c == 1 else 1)
                elif color[next] == c: 
                    self.ans = False
                    return 
    
        for i in range(n):
            if color[i] == -1: 
                bipartite(i, 1)
            if not self.ans:
                break
    
        return self.ans
        
        
        
        
        
        