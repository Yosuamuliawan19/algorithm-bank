class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        
        
        n = len(nums)
        
        '''
        time = 0(n^2)
        space = O(n)
        '''
    
        @lru_cache(maxsize=None)
        def dp(i): 
            cur_len, cur_count = 1, 1
            for j in range(i+1, n):
                if nums[j] <= nums[i]: continue
                next_len, next_count = dp(j)
                if next_len + 1 > cur_len: cur_len, cur_count = next_len + 1, next_count 
                elif next_len + 1 == cur_len: cur_count += next_count
            return cur_len, cur_count
            
        ans_len, ans_count = 0, 0 
        for i in range(n):
            next_len, next_count = dp(i)
            if next_len + 1 > ans_len: ans_len, ans_count = next_len + 1, next_count 
            elif next_len + 1 == ans_len: ans_count += next_count
                
        return ans_count
        
        