class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        
        n = len(nums)
        
        st = set()
        
        memo = set()
        def dp(i, arr, bitmask):
            
            if bitmask in memo: 
                return 
            memo.add(bitmask)
            
            st.add(tuple(arr))
            
            for j in range(0, n):
                if (bitmask >> j & 1) == 0:
                    dp(j, arr + [nums[j]], bitmask | (1 << (j)))

                
        dp(0, [], 0)
            
        return list(st)