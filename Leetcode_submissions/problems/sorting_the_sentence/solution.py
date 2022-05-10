class Solution:
    def sortSentence(self, s: str) -> str:
        
        ans = ''
        st = {}
        mx = 1
        prev = 0
        for i in range(len(s)):
            if (s[i] == ' '):
                st[ord(s[i-1]) - ord('0')] = s[prev: i-1]
                mx += 1
                prev = i+1
        st[ord(s[len(s)-1]) - ord('0')] = s[prev: len(s)-1]
        for i in range(1, mx+1):
            if (i != 1):
                ans += ' '
            ans += (st[i])
        
        return ans