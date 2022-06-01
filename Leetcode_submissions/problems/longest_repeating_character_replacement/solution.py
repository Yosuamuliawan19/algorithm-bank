class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        
        n = len(s)

                
        
        
        
        '''
        
        ABAB
        A_A_
        _B_B
        
        
        
        
        
        Sliding window
        
        26 times do this
        
        '''
        
        st = set()
        n = len(s)
        for c in s: st.add(c)    
            
            
        ans = 0
        for c in list(st):
            l = -1
            balance = k 
            for r in range(n):
                if s[r] != c:
                    if balance == 0:
                        while l != r and balance == 0:
                            l += 1
                            if s[l] != c:
                                balance += 1
                                break
                    balance -= 1
                ans = max(ans, r-l)
        return ans
            
        
        
        
            
        
        