class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        
        
        sums = []
        for i in range(len(nums)):
            if (i == 0):
                sums.append(nums[i])
            else:
                sums.append(sums[i-1] + nums[i])
        # print(sums)
        mn, ans, mnidx = sums[0], sums[0],  0
        for i in range(len(sums)):
            # print(sums[i], ans, sums[i] - mn)
            ans = max(sums[i], ans)
            if (i != mnidx):
                ans = max(ans, sums[i] - mn)
            mn = min(mn, sums[i])
        return ans