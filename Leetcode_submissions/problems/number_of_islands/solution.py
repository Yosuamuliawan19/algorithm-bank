class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        
        
        m, n = len(grid), len(grid[0])
        ans = 0
        self.grid = grid
        
        self.dirx = [0,0,1,-1]
        self.diry = [1,-1,0,0]
        def dfs(i, j):
            self.grid[i][j] = '0'  
            for k in range(4):
                x,y = i+self.dirx[k], j+self.diry[k]
                if x >= 0 and x < m and y >= 0 and y < n and self.grid[x][y] == '1':
                    self.grid[x][y] = '0'
                    dfs(x, y)
                    
        
        for i in range(m):
            for j in range(n):
                if (self.grid[i][j] == '1'):
                    dfs(i, j)
                    ans += 1
        
        return ans
                
        

                
            
            
            
            