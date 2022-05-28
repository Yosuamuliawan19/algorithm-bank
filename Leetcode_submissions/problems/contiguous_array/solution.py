class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        
        
        balance = 0 
        ans = 0
        mp = {}
        # print('---')
        for i in range(len(nums)):
            
            if nums[i] == 1: balance += 1
            else: balance -= 1
            
            if balance == 0: ans = max(ans, i+1)
            else:
                if balance in mp:
                    # print(balance, i, mp[balance])
                    ans = max(ans, i-mp[balance])

            if balance in mp: mp[balance] = min(mp[balance], i)
            else: mp[balance] = i
                
                
        
        return ans