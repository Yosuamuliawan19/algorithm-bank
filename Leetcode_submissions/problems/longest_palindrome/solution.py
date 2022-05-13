class Solution:
    def longestPalindrome(self, s: str) -> int:
        
        
        cnt = [0 for _ in range(52)]
        
        for c in s:
            if (c >= 'a' and c <= 'z' ):
                cnt[ord(c)-ord('a')] += 1
            else:
                cnt[ord(c)-ord('A')+26] += 1
        

        ans = 0
        flag = True
        for i in range(52):
            ans += int(cnt[i] / 2) * 2
            if (cnt[i] % 2 == 1 and flag):
                flag = False
                ans += 1
        return ans