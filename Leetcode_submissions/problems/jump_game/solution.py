class Solution:
    def canJump(self, nums: List[int]) -> bool:
        
        
        
        idx = 0
        n = len(nums)
        credit = nums[idx]
        
        while idx != n and credit != 0:
            credit -= 1
            idx += 1
            if idx >= n-1:
                break
            credit = max(credit, nums[idx])
        
        if idx < n-1:
            return False
        
        return True