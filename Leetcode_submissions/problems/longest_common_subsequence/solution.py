class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        
        
        n, m = len(text1), len(text2)
        
        @lru_cache(maxsize=None)
        def dp(i, j):
            if i == n or j == m:
                return 0
    
            ans = dp(i+1, j)
            ans = max(ans, dp(i, j+1))
            if text1[i] == text2[j]:
                ans = max(ans, 1 + dp(i+1, j+1))
            
            return ans
        
        return dp(0,0)
        
        