class Solution:
    def romanToInt(self, s: str) -> int:
        
        
        
        # print('---')
        ans = 0
        n = len(s)
        i = n-1
        while i != -1:
            if s[i] == 'I':
                ans += 1
                
            elif s[i] == 'V':
                ans += 5
                if i!=0 and s[i-1] == 'I': ans, i = ans-1, i-1

            elif s[i] == 'X':
                ans += 10
                if i!=0 and s[i-1] == 'I': ans, i = ans-1, i-1

            elif s[i] == 'L':
                ans += 50
                if i!=0 and s[i-1] == 'X': ans, i = ans-10, i-1

            elif s[i] == 'C':
                ans += 100
                if i!=0 and s[i-1] == 'X': ans, i = ans-10, i-1

            elif s[i] == 'D':
                ans += 500
                if i!=0 and s[i-1] == 'C': ans, i = ans-100, i-1

            elif s[i] == 'M':
                ans += 1000
                if i!=0 and s[i-1] == 'C':ans, i = ans-100, i-1
            i-=1
            # print(ans)
        return ans