class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        
        
        n = len(nums)
        
        @lru_cache(maxsize=None)
        def dp(balance, i):
            if i == n:
                if balance == target: return 1
                else: return 0
                         
            return dp(balance-nums[i], i+1) +  dp(balance+nums[i], i+1)
        
        return dp(0, 0)
        