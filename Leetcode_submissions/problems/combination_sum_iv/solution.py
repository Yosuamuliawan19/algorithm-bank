class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        
        n = len(nums)
        
        nums.sort()
        
        @lru_cache(maxsize=None)        
        def dp(balance):
            if balance == 0: return 1
            sum = 0
            for i in range(n):
                if nums[i] > balance: break
                sum += dp(balance-nums[i])
            return sum
            
        return dp(target)