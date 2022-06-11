class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        
        
        # prefix sum both ways
        # check if there is corresponding, using binary search
        # n log n
        
        n = len(nums)
        
        pre1 = [0, nums[0]]
        pre2 = [0, nums[n-1]]
        
        for i in range(1, n):
            pre1.append(pre1[-1] + nums[i])
        
        for i in range(n-2, -1, -1):
            pre2.append(pre2[-1] + nums[i])
        
        n += 1
        # print(pre1)
        # print(pre2)
        ans = float('inf')
        
        for i in range(n):        
            l, r, target = 0, n-i-1, x-pre1[i]
            found_idx = -1
            while r >= l:
                m = l+int((r-l)/2)
                if pre2[m] == target:
                    found_idx = m
                    break
                elif pre2[m] < target:
                    l = m+1
                else:
                    r = m-1
            if found_idx != -1:
                ans = min(ans, i + found_idx)
                
        if ans == float('inf'): return -1
        
        return ans