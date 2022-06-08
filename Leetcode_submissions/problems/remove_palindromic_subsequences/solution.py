class Solution:
    def removePalindromeSub(self, s: str) -> int:
        
        def isPalindrome(s):
            
            l, r = 0, len(s)-1
            while r > l:
                if s[l] != s[r]: return False
            
                l += 1
                r -= 1
            return True
    
        
    
        if isPalindrome(s):
            return 1
        
        
        hasA, hasB = False, False
        
        for c in s:
            if hasA and hasB: break
            if c == 'a': hasA = True
            else: hasB = True
                
        if hasA and hasB: return 2
        
        return 1
    
        
        
        
        
        
        