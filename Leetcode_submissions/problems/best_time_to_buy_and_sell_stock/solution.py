class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        mn, ans = 1e9, 0
        for  i in range(len(prices)):
            mn = min(mn, prices[i])
            
            ans = max(ans, prices[i] - mn)
        
        return ans
    
