class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        
        n = len(nums)
        ans = 0
        
        
        
#         for i in range(n):
            
#             cur = nums[i]
#             print('idx' ,i,  nums[i])
#             # (take the current element as the largest) while element is smaller than current
#             mn, j = cur, i-1
#             while j != -1 and nums[j] <= cur:
#                 mn = min(mn, nums[j])
#                 print(nums[j: i+1])
#                 ans += abs(cur - mn)
#                 j -= 1
            
#             mn, j = cur, i+1
#             while j != n and nums[j] <= cur:
#                 mn = min(mn, nums[j])
#                 ans += abs(cur - mn)
#                 print(nums[i: j+1])
#                 j += 1

        ans = 0
        for i in range(n):
            mn, mx = nums[i], nums[i]
            for j in range(i+1, n):
                mn, mx = min(mn, nums[j]), max(mx, nums[j])
                ans += (mx - mn)
                
            
        return ans
            
                        
