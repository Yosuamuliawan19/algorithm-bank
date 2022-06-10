class Solution:
    def shortestPath(self, grid: List[List[int]], k: int) -> int:
        '''
        
        (i, j, k)
        
        
        # O(elogv)
        
        '''
        
        
        dirs = [(0,1), (1,0), (-1,0), (0,-1)]
        n, m = len(grid), len(grid[0])
        
        q = deque([(0, 0, 0, k)])
        vis = set()
        vis.add((0,0))
        
        if n == 1 and m == 1:
            return 0
  
        while len(q) != 0:    
            dis, i, j, balance = q.popleft()
            for dir in dirs:    
                x, y = i+dir[0], j+dir[1]
                if x >= 0 and x < n and y >= 0 and y < m and (x,y,balance+1) not in vis:
                    if x == n-1 and y == m-1: return dis+1
                    next_balance = balance - grid[x][y]
                    if next_balance >= 0:
                        vis.add((x,y,balance+1))
                        q.append((dis+1, x, y, next_balance))
               
        return -1