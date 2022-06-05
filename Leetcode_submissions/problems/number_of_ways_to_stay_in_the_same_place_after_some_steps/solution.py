class Solution:
    def numWays(self, steps: int, arrLen: int) -> int:
         
        mod = 1e9 + 7
        @lru_cache(maxsize=None)   
        def dp(balance, s):
            if s == steps:
                if balance == 0: return 1
                else: return 0
            
            cnt =  dp(balance, s+1)
            if balance > 0: cnt += dp(balance-1, s+1)
            if balance < arrLen-1: cnt += dp(balance+1, s+1)
            return int(cnt % mod)
        
        
        return dp(0, 0)