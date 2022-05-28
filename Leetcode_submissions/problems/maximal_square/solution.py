class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
    
    
        
        
        n, m = len(matrix), len(matrix[0])
        
        dp = [[0 for _ in range(m)] for _ in range(n)] 
        
        ans = 0
        
        for i in range(n):
            for j in range(m):  
                if matrix[i][j] == '1':
                    
                    dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))
                    ans = max(ans, dp[i][j]**2 )
                else: 
                    dp[i][j] = 0
        
        return ans