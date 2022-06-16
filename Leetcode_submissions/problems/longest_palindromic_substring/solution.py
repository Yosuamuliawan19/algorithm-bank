class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        
        '''
        
        babad
        
        
        ab ba    
        ab bbd
        
        
        ab b
        
        
        
        all possible substring = n*(n+1)/2
        
        
        dp(l, r)
        
            
            a + aba + a
            
            
            dp(l-1, r+1) = dp(l, r) + s[l] == s[r]
            
            
            
            isPal(l, r)
            
            isPal(l, r) 
            
        '''
        
        
        
        n = len(s)
        ans_l, ans_r = 0, 0
        max_ans = 1
        
        dp = [[False for _ in range(n)] for _ in range(n)]
        
        for i in range(n):
            dp[i][i] = True
            l, r = i-1, i+1
            while l >= 0 and r < n and s[l] == s[r]:
                dp[l][r] = True
                if r-l+1 > max_ans: ans_l, ans_r, max_ans = l, r, r-l+1
                l, r = l-1, r+1
        
            
            if i!= n-1 and s[i] == s[i+1]:
                dp[i][i+1] = True
                l, r = i-1, i+2
                if max_ans < 2: ans_l, ans_r, max_ans = i, i+1, 2
                while l >= 0 and r < n and s[l] == s[r]:
                    dp[l][r] = True
                    if r-l+1 > max_ans:  ans_l, ans_r, max_ans =  l, r, r-l+1
                    l, r = l-1, r+1
    
  
            
        return s[ans_l: ans_r+1]