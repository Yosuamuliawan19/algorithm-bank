class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        mn, ans = 1+10e5, 0
        for idx, i in enumerate(prices):
            mn = min(mn, i)
            ans = max(ans, i-mn)
        return ans