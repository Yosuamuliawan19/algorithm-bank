class Solution:
    def numDecodings(self, s: str) -> int:
        
        n = len(s)

        @lru_cache(maxsize=None)
        def dp(idx):
            if idx >= n: return 1
            
            ans = 0
        
            if s[idx] != '0': 
                ans += dp(idx+1)
                
            if idx < n-1 and (s[idx] == '1' or (s[idx] == '2' and s[idx+1] <= '6')) :  
                ans += dp(idx+2)
    
            return ans
        
        return dp(0)