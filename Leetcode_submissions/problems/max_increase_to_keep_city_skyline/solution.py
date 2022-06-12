class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        '''
        [3,0,8,4],
        [2,4,5,7],
        [9,2,6,3],
        [0,3,1,0]]
        
        
        '''
        
        n = len(grid)
        maxR = [0 for _ in range(n)]
        maxC = [0 for _ in range(n)]
        
        
        
        for i in range(n):
            for j in range(n):
                maxR[i] = max(maxR[i], grid[i][j])
                maxC[j] = max(maxC[j], grid[i][j])
                
        ans = 0
        for i in range(n):
            for j in range(n):
                
                mx = min(maxR[i], maxC[j])
                ans += (mx - grid[i][j] ) 
                
        return ans