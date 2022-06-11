class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        n, m = len(num1)-1, len(num2)-1
        
        ans = ''
        carry = 0    
    
        while n!=-1 and m!=-1:
            cur = carry + int(num1[n]) + int(num2[m])
            carry = 0
            if cur >= 10:
                carry = int(cur/10)
                cur = cur%10
            ans = chr(ord('0') + cur) + ans 
            n -= 1
            m -= 1
        
        while n!=-1:
            cur = carry + int(num1[n]) 
            carry = 0
            if cur >= 10:
                carry = int(cur/10)
                cur = cur%10
            ans = chr(ord('0') + cur) + ans 
            n -= 1

        while m!=-1:
            cur = carry + int(num2[m]) 
            carry = 0
            if cur >= 10:
                carry = int(cur/10)
                cur = cur%10
            ans = chr(ord('0') + cur) + ans 
            m -= 1
        

        
        if carry != 0:
            ans = chr(ord('0') + carry) + ans 
            
        return ans