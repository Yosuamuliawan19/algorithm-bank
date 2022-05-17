class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        one, l, r = 0, 0, 0
        n = len(nums)
        while l < n:
            if r == n:
                if one != 0:
                    one, nums[l], l = one - 1, 1, l+1
                    continue
                else:
                    nums[l], l = 2, l+1
                    continue
                    
            if nums[r] == 0:
                nums[r], nums[l], l = nums[l], 0, l+1
            elif nums[r] == 1:
                one += 1
            r += 1
        return nums
            
            