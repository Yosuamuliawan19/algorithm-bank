class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = [1 for _ in range(len(nums))]
        
        # forward pass
        running = 1
        for i in range(len(nums)):
            ans[i] = ans[i] * running
            running *= nums[i]
        
        # backward pass
        running = 1
        for i in range(len(nums)-1, -1, -1):
            ans[i] = ans[i] * running
            running *= nums[i]
        
        return ans