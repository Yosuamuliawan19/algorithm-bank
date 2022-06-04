class Solution:
    def maxDistance(self, grid: List[List[int]]) -> int:
        
        dirs = [(0,1),(1,0), (0,-1), (-1,0)]        
        n, m = len(grid), len(grid[0])
        q = []
        vis = set()
        
        
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    vis.add((i,j))
                    heapq.heappush(q, ( 0, i,j))
                
        ans = -1
        
        while len(q) != 0:
            dis, i, j = heapq.heappop(q)
            if grid[i][j] == 0: ans = max(ans, dis)
            for dir in dirs:
                x, y = i+dir[0], j+dir[1]
                if (x,y) not in vis and x >= 0 and x < n and y >= 0 and y < m:
                    nextDistance = dis + 1
                    if grid[x][y] == 1: nextDistance = 0        
                    vis.add((x,y))
                    heapq.heappush(q, (nextDistance, x,y))
        
        return ans
        
                
            
            
            