class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        n = len(nums)


        for i in range(n):
            idx = abs(nums[i]) - 1
            nums[idx] *= -1
            if nums[idx] > 0: return idx + 1
            
        
#         # all elements are only once, and rest is 2 or more
        
#         #  1, 2, 3 |  4, 2     -> 8, 4 = 12 
        
#         #  1, 4 |   2, 2, 2  -> 5, 6 = 11 
        
#         #  1, 2, 3, 4, 5     -> 10
        
#         # get min max 
            
#         # 1,4 = 10
#         # 1,4 = 10
        
#         #  1, 
        
#         # 5*6/2 = 15
        
        
#         # 1^2^4^8
#         #     
#         n = len(nums)
        
#         for i in range(n):
#             for j in range(i+1, n):
                
#                 if nums[i] == nums[j]:
#                     return nums[i]
        return -1