class Solution:
    def numTrees(self, n: int) -> int:
        
        
        @lru_cache(maxsize=None)
        def dp(x):
            if x <= 1: return 1
            sum = 0
            for i in range(0, x):
                sum += (dp(i) * dp(x-(i+1)))
            return sum
        return dp(n)
            
        
        
        
        
        '''
        dp(i) = dp(i-1) + dp(n-i)
        
        
        '''
        
        
        