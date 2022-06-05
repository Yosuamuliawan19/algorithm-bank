class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        '''
        Time complexity: O( word1.length * word2.length)
        Space complexity: O( word1.length * word2.length)
        '''
        n, m = len(word1), len(word2)
        
        @cache
        def dp(i, j):
            if i == n and j == m: return 0
            if i == n: return m - j
            if j == m: return n - i 
            # skip or replace
            if word1[i] == word2[j]:
                return dp(i+1, j+1)
            else:
                return min(dp(i+1, j+1), dp(i+1, j),  dp(i, j+1)) + 1
            
            
            
        return dp(0,0)