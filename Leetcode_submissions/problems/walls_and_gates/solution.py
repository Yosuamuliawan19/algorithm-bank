class Solution:
    def wallsAndGates(self, rooms: List[List[int]]) -> None:
        """
        Do not return anything, modify rooms in-place instead.
        """
        
        
        
        
        
        '''
        bfs from gates
        
        '''
        
        dirs = [(0,1), (1,0), (-1, 0), (0,-1)]
        
        n, m = len(rooms), len(rooms[0])
        
        q = deque([])
        
        for i in range(n):
            for j in range(m):
                if rooms[i][j] == 0:
                    q.append((0, i, j))
                    
        while len(q) != 0:
            
            dis, i, j  = q.popleft()
            
            for dir in dirs:
                x, y = i+dir[0], j+dir[1]
                if x >= 0 and x < n and y >= 0 and y < m \
                and rooms[x][y] == 2147483647 and rooms[x][y] > dis+1:
                    rooms[x][y] = dis+1
                    q.append((dis+1, x, y))
                    
        return rooms
        