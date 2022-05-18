class Solution:
    def myAtoi(self, s: str) -> int:
        
        def isDigit(x):
            return x >= '0' and x <= '9'
            
        
        
        idx, n, isNegative = 0,  len(s), False
        
        # ignoring whitespace
        while idx != n and s[idx] == ' ':
            idx += 1
        
        # check if there are string left
        if idx == n:
            return 0
        
        # check for - and + ve
        if s[idx] == '+':
            idx += 1
            if idx == n or not isDigit(s[idx]):
                return 0
            
        if s[idx] == '-':
            isNegative = True
            idx += 1
            if idx == n or not isDigit(s[idx]):
                return 0
            
        ans = 0
        mod = (2**31)-1 if not isNegative else (2**31) 
        flag = True
        
        # parse int
        while idx != n and isDigit(s[idx]):
            ans = ( (ans * 10) + (ord(s[idx])-ord('0'))  ) 
            if ans > mod:
                return -mod if isNegative else mod
            idx += 1

        if isNegative:
            if ans > mod:
                return -1*mod
            return -1*ans
        
        if ans > mod:
            return mod
    
        return ans
        
        
        
        
            
            
            
        
        
        
        
        
        
        
        
        