class Solution:
    def numTilings(self, n: int) -> int:
        
        mod = 1e9 + 7
        
        @lru_cache(maxsize=None)
        def dp(i):
            if i == 1 or i == 0: return 1
            if i == 2: return 2
            if i == 3: return 5
            
            count = (dp(i - 1) * 2 + dp(i - 3)) % mod
            return int(count)
        
        return dp(n)