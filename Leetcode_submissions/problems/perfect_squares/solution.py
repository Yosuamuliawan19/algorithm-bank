class Solution:
    def numSquares(self, n: int) -> int:
        
        arr = []
        for i in range(1, int(n**0.5) + 1):
            arr.append(i**2)
        
        @cache
        def dp(balance):
            if balance == 0: return 0
            mn_len = float('inf')
            for num in arr:
                if balance >= num: mn_len = min(mn_len, 1 + dp(balance - num))
                else: break
            return mn_len
        
        
        return dp(n)