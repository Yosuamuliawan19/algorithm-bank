class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        
        
        
        n = len(nums)

        prefixSum = [nums[0]]
        for i in range(1, n):
            prefixSum.append(nums[i] + prefixSum[-1])
        max_width = 0
        
        for i in range(0, n):
            l, r = i, n-1
            
            while r >= l:
                m = l + int((r-l)/2)
                total = prefixSum[m] - (prefixSum[i-1] if i != 0 else 0)
                width = m-i+1
                if width - total <= k: # true case
                    l = m + 1
                    max_width = max(max_width, width)
                else: # false case
                    r  = m -1
        
#         l, r, balance = 0, 0, k
    
#         while r < n:
            
#             # while valid
#             while r < n and (nums[r] == 1 or (nums[r] == 0 and balance != 0)):
#                 if nums[r] == 0: balance -=1
#                 r += 1
        
#             max_width = max(max_width, r-l)
#             if r == n: break
                
#             # while invalid
#             while l < r and balance == 0:
#                 if nums[l] == 0: balance += 1
#                 l += 1
            
#             if l == r: l, r = l + 1, r + 1
        
        return max_width 