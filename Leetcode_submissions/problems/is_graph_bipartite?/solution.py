class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        
        color = {}
        nodes = set()
        
        for adj in graph:
            for next in adj:
                color[next] = -1
                nodes.add(next)

        self.ans = True
                
        def bi(node, c):
                        
            color[node] = c
            
            for next in graph[node]:
                
                if color[next] == color[node]:
                    self.ans = False
                    return 
                
                if color[next] == -1:
                    bi(next, 2 if c == 1 else 1)
        
        
        for node in nodes:
            if color[node] == -1:
                bi(node, 1)
            if not self.ans:
                break
        
        return self.ans