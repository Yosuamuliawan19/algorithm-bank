class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
    
        n = len(s)
        
        @lru_cache(maxsize=None)
        def dfs(i):
            if i > n-1:
                return True
        
            prev = ""
            for j in range(i, n):
                prev += s[j]
                if prev in wordDict:
                    isValid = dfs(j+1)
                    if isValid: return True
                    
            return False

        return  dfs(0)