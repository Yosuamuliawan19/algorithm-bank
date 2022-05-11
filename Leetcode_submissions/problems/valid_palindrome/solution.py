class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1
        def isAlpha(x):
            return (x >= 'a' and x <= 'z') or (x >= 'A' and x <= 'Z') or (x >= '0' and x <= '9')
        while (r > l):
            if (not isAlpha(s[l])):
                l+=1
                continue
            if (not isAlpha(s[r])):
                r-=1
                continue
            # print(s[l].lower(), s[r].lower(), s[l].lower() != s[r].lower())
            if (s[l].lower() != s[r].lower()):
                return False
            
            l+=1
            r-=1
        return True