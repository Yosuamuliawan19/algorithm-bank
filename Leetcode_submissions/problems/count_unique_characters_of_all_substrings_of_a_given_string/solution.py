class Solution:
    def uniqueLetterString(self, s: str) -> int:
        
            
        
        dp = {}
        
        n, ans = len(s), 0
    
        last = {s[i]:-1 for i in range(n)}
        
        for i in range(0, n):
            dp[i] = i - last[s[i]] 
            last[s[i]] = i
            
        last = {s[i]:n for i in range(n)}
            
        for i in range(n-1,-1,-1):
            dp[i] *= last[s[i]] - i
            ans += dp[i]
            last[s[i]] = i
        
        return ans
            
        # 'LE(E)T)C)O)D)E'