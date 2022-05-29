def isDigit(c):
    return c >= '0' and c <= '9'

class Solution:
    def decodeString(self, s: str) -> str:

        prefix = ''
        i = 0
        n = len(s)
        while i < n:            
            # if is digit
            if isDigit(s[i]):
                
                # resolve digit
                digit = 0
                while isDigit(s[i]):
                    digit = digit*10 + ord(s[i]) - ord('0')
                    i += 1
                    
                # resolve brackets
                l, r = i+1, i+1
                lb, rb = 1, 0
                while r < n and lb != rb:
                    if s[r] == '[': lb+=1
                    elif s[r] == ']': rb+=1
                    r += 1
                prefix += digit * self.decodeString(s[l: r-1])
                i = r-1
            else:
                prefix += s[i]
            
            i+=1
        
        return prefix