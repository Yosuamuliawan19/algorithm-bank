class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        
        
        
        n, m = len(matrix), len(matrix[0])
        
        @cache
        def dp(row, col):
            if row == n:
                return 0
            
            
            mn = dp(row+1, col)
            
            if col < m-1:
                mn = min(mn, dp(row+1, col+1))
            if col > 0:
                mn = min(mn, dp(row+1, col-1))
            
            return matrix[row][col] + mn
            
        
        ans = float('inf')
            
        for j in range(m):
            ans = min(ans, dp(0, j))
        
        return ans