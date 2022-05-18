class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        # max_ascii common subsequence
        
        total_ascii = sum([ord(c) for c in s1]) + sum([ord(c) for c in s2])
        
        n, m = len(s1), len(s2)
        
        @lru_cache(maxsize=None)
        def dp(i, j):
            if i == n or j == m:
                return 0

            ascii = 0
            if s1[i] == s2[j]:
                ascii = max(ascii,  dp(i+1, j+1) + ord(s1[i]))
            ascii = max(ascii,  dp(i+1, j))
            ascii = max(ascii,  dp(i, j+1))
            return ascii
        
        return total_ascii - (dp(0, 0) * 2)