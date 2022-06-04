class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
           
        vis = set()
        n, m = len(grid), len(grid[0])
        ans = 0
        dirs = [(0,1), (1, 0), (0, -1), (-1, 0)]
        
        def dfs(i, j):
            
            vis.add((i,j))
            if  i == 0 or i == n-1 or j == 0 or j == m-1:
                nonlocal reachSea
                reachSea = True
                
            for dir in dirs:
                x, y = i+dir[0], j+dir[1]
                if x >= 0 and x < n and y >= 0 and y < m and (x,y) not in vis and grid[x][y] == 0:
                    dfs(x,y)
            
        
                        
        for i in range(n):
            for j in range(m):
                if (i,j) not in vis and grid[i][j] == 0: 
                    reachSea = False
                    dfs(i, j)
                    if not reachSea: ans += 1
        
        
        return ans