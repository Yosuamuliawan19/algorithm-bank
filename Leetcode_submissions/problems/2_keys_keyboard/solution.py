class Solution:
    def minSteps(self, n: int) -> int:
        
        
        @cache
        def dp(i, j):
            
            if i == n: return 0
            if i > n: return float('inf')
            

            ans = float('inf')
            if i != j: 
                ans = min(ans, dp(i, i) + 1)
            if j != 0:
                ans = min(ans, dp(i + j, j) + 1)
            
            return ans
            
        return dp(1, 0)
        