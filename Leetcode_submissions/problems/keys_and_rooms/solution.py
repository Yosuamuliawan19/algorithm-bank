class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        
        
        adj = defaultdict(list)
        
        vis = set()
        
        n = len(rooms)
        
        for room_no, room in enumerate(rooms):
            for key in room:
                adj[room_no].append(key)
                
    
        def dfs(node):
            vis.add(node)
            for next in adj[node]:
                if next not in vis:
                    dfs(next)
        dfs(0)
        return n == len(list(vis))
        
        
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    