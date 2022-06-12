class Solution:
    def numOfMinutes(self, n: int, headID: int, manager: List[int], informTime: List[int]) -> int:
        
        
        adj = defaultdict(list)
        
        for idx, m in enumerate(manager):
        
            adj[m].append(idx)
        
    
        
        def dfs(node):
            
            res = 0 
            for next in adj[node]:
                res = max(res, dfs(next))
                
            return res + informTime[node]
                
        # print(adj)
        
        
        return dfs(headID)