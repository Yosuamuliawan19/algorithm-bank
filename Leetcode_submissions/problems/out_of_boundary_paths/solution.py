class Solution:
    def findPaths(self, m: int, n: int, maxMove: int, startRow: int, startColumn: int) -> int:
        
        dirx = [0,0,1,-1]
        diry = [1,-1,0,0]
        
        @lru_cache(maxsize=None)
        def dp(i, j, stepsLeft):
            if i <= -1 or i >= m or j <= -1 or j >= n:
                return 1
            if not stepsLeft:
                return 0
            ans = 0        
            for k in range(4):
                ans += dp(i + dirx[k], j + diry[k], stepsLeft-1)
            return ans % (1e9+7)
            
        return int(dp(startRow, startColumn, maxMove))
            
    
        
        
