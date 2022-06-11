class Solution:
    def maximumEvenSplit(self, finalSum: int) -> List[int]:
        if finalSum % 2 != 0: return []
        
        
        
        '''
        sum of 1...n = n*(n+1)/2 
        if sum == 10^10, then n ~ 10^5
        
        '''
        # 2, 4, 6, = 12
        # left = 16
        # 8+8
        # 
        
        '''
        left = 28, min 6
        2 = 26,  take
        
        left = 26
        4 = 22, take
    
        left 22, 
        6 = 16, take
        
        left 16
        8, 8, dont take
        10
        
        
        
        28 -> 2, 4, 6, 8, 816,
        
        34 -> 2, 36
        '''
        
        ans = []
        take = 0
        left = finalSum
        
        while left > 0:
            for next_take in range(take+2, left+1, 2):
                amount_left = left - next_take
                if amount_left > next_take or next_take == left:
                    take = next_take
                    break
                    
            ans.append(take)
            left -= take
            
        return ans
            
        
                
        
        