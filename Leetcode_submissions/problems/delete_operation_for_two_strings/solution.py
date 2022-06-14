class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        '''
        lcs
        
        O(n*m)
        '''
        
        
        
        n, m = len(word1), len(word2)
        
        @cache
        def dp(i, j):
            
            if i == n or j == m:
                return 0
            
            if word1[i] == word2[j]:
                return 1 + dp(i+1,j+1)
            else:
                return max(dp(i+1, j), dp(i, j+1))
    
            
        lcs =  dp(0,0)
        
        return n+m-(2*lcs)
        
        