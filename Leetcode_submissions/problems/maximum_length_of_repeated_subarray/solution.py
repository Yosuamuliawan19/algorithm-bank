class Solution:
    def findLength(self, nums1: List[int], nums2: List[int]) -> int:
        n, m = len(nums1), len(nums2)
        
#         @cache
#         def dp(i, j):
#             if i == n or j == m:
#                 return 0
            
#             if nums1[i] == nums2[j]:
#                 return dp(i+1, j+1) + 1
#             else:
#                 return max(dp(i+1, j), dp(i, j+1))
            
        arr = [[0 for _ in range(m)] for _ in range(n)]
        
        ans = 0
        for i in range(n):
            for j in range(m):
                if nums1[i] == nums2[j]:
                    if i == 0 or j == 0: arr[i][j] = 1
                    else: arr[i][j] = arr[i-1][j-1]+1
            
                    ans = max(ans, arr[i][j])
        # print(arr)
            
        return ans