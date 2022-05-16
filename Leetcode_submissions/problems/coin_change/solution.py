class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        coins.sort(reverse=True)
        self.coins = coins
        self.memo = {}
        self.n = len(coins)
        self.INT_MAX = 1e10
        
        
        def dp(balance):
            if balance == 0:
                return 0
            if balance in self.memo:
                return self.memo[balance]
            
            ans = self.INT_MAX
            for i in range(self.n):
                if self.coins[i] <= balance:
                    ans = min(ans, dp(balance-self.coins[i]) + 1)
            if ans > self.INT_MAX:
                ans = self.INT_MAX
            self.memo[balance] = ans
            return ans
        
        
        ans = dp(amount)
        if ans == self.INT_MAX:
            return -1
        return ans
            
        
            
            
            
            
            