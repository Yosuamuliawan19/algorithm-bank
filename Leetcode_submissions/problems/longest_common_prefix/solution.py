class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if (len(strs) == 1):
            return strs[0]
        
        mn = len(strs[0])
        for s in strs:
            mn = min(mn, len(s))
        
        ans = -1
        for i in range(mn):
            init = strs[0][i]
            for j in range(len(strs)):
                if strs[j][i] != init: 
                    return strs[j][0:i]
            ans = i
            
        return strs[0][0:ans+1]
            
            
            
            
            
        
        
        