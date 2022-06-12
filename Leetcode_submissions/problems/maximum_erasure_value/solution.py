class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        
        
        n = len(nums)
        l = -1
        st = set()
        
        cur_sum = 0
        ans = 0
        for r in range(n):
            while nums[r] in st:
                l+=1
                st.remove(nums[l])    
                cur_sum -= nums[l]
            
            st.add(nums[r])
            cur_sum += nums[r]
            ans = max(ans, cur_sum)
            
        return ans