class Solution:
    def appealSum(self, s: str) -> int:
        
        
        dp = defaultdict(int)
        n, ans = len(s), 0
        last = {s[i]:-1 for i in range(n)}
        
        for i in range(0, n):
            dp[i] = i - last[s[i]] + dp[i-1]
            # this character contributes to 
            # dp[i] + 1 => since all previous substring can be appended by char
            # new substrings from i - last[s[i]], since at last[s[i]], we have also considered its contributions
            
            ans += dp[i]                
            last[s[i]] = i
        return ans
    
    
        '''
      
        a b b c a b
        
        
        dp 1 a 1
        
        dp 2 a 2
        dp 2 b 3
        
        dp 3 a 3
        dp 3 b 4
        
        dp 4 a 4
        dp 4 b 6
        dp 4 c 7
        
        dp 5 a 1
        dp 5 b 4
        dp 5 c 6
        '''