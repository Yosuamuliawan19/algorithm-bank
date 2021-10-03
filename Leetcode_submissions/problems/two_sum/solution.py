class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                a = nums[i] + nums[j]
                if (a == target):
                    return [i, j]
                
        return [0,0]