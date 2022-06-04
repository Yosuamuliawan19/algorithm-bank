class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        
        
        
        vis = set()
        n, m = len(grid), len(grid[0])
        dirs = ((0,1), (1,0), (-1, 0), (0,-1))
        
        reachSea = False
        cellCount = 0
        ans = 0
        
        def isEdge(i, j):
            return i == 0 or i == n-1 or j == 0 or j == m-1
        
        def dfs(i, j):
            
            vis.add((i, j))
            nonlocal cellCount
            cellCount += 1
            if isEdge(i, j): 
                nonlocal reachSea
                reachSea = True
            
            for dir in dirs:
                x, y = i+dir[0], j+dir[1]
                if (x, y) not in vis and x >= 0 and x <= n-1 and y >= 0 and y <= m-1 and grid[x][y] == 1:
                    dfs(x,y)
    
        for i in range(n):
            for j in range(m): 
                if (i,j) not in vis and grid[i][j] == 1:
                    reachSea = False
                    cellCount = 0
                    dfs(i, j)
                    if not reachSea:  ans += cellCount
                        
        return ans        