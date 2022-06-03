class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        
        
        mod = 1e9 + 7
        
        @lru_cache(maxsize=None)        
        def dp(die, balance):
            if die > n: return 0
            if die == n:
                if balance == 0: return 1
                return 0
            sum = 0
            for i in range(1, k+1):
                if i > balance: break
                sum = (sum+dp(die+1, balance-i)) % mod
            return int(sum % mod)
        
        return dp(0, target)