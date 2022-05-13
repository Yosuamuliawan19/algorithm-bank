class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        
        
        cnt, can = 0, nums[0]
        
        for i in nums:
            if (cnt == 0):
                can = i
            cnt += 1 if can == i else -1
        
        return can