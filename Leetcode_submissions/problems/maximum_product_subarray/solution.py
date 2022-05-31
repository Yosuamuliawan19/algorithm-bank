class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        
        #  [2,3,-2,4]
        '''
            2, 3, -1, 4, -8
            
            
             [2, 6, -12, -48, 384]
        
        
        '''
        
        if len(nums) == 0:
            return 0
        if len(nums) == 1:
            return nums[0]
        
        l, r, n = 0, 0, len(nums)
        while r < n:
            if nums[r] == 0:
                break
            r+=1 
            
        if r == 0:
            return max(0, self.maxProduct(nums[r+1:]))

        # ok now solve for max here        
        mps = []
        current = 1
        mn_neg, mx_neg, neg_cnt = float('inf'), float('-inf'), 0
        max_elem = nums[0]
        for i in range(r):
            if nums[i] < 0: 
                neg_cnt += 1        
                mn_neg = min(mn_neg, i)
                mx_neg = max(mx_neg, i)
            current *= nums[i]
            mps.append(current)
            max_elem = max(max_elem, nums[i])
        
        # print('mps', mps, neg_cnt, l, r)
        if neg_cnt % 2 != 0:
            arr = [max_elem]
            if r-1 != mn_neg: arr.append(mps[r-1]/mps[mn_neg])
            if r-1 != mn_neg: arr.append(mps[r-1]/mps[mx_neg])
            arr.append(mps[mx_neg-1])
            arr.append(mps[mn_neg-1])
            ans = max(arr)
        else:
            ans = mps[r-1]
        
        ans = int(ans)
        # here
        if r < n-1:
            return max(ans, 0, self.maxProduct(nums[r+1:n]))
        
        if r != n and nums[r] == 0:
            return max(ans, 0)
        
        
        return ans

        
        