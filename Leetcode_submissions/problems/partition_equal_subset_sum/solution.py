class Solution:
    def canPartition(self, nums: List[int]) -> bool:
    
        total = sum(nums)
        
        if total % 2 != 0: return False
        
        target = total / 2
        n = len(nums)
        nums.sort()
        
        self.ans = False
        
        @lru_cache(maxsize=None)
        def dp(i, amount):
            if self.ans or i == n:
                return 
            if amount == 0:
                self.ans = True
                return 
                
            for k in range(i, n):
                if nums[k] > amount:
                    break
                dp(k+1, amount-nums[k])
            
            dp(i+1, amount)
        dp(0, target)
            
        return self.ans
        
        
        
        
        
        