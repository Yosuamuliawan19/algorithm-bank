class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:

        
        n, m = len(s), len(p)
        cnt = {}
        balance = m
        ans = []
        
        for i in range(m):
            if p[i] in cnt: cnt[p[i]] += 1
            else: cnt[p[i]] = 1
            
        l, r = 0, 0
        while r != n: 
            # print(l, r, balance, s[l: r])
            # the current char is not in the cnt
            if r != n and s[r] not in cnt:
                while l != r and l != n:
                    if s[l] in cnt: 
                        cnt[s[l]] += 1
                        balance += 1
                    l+=1
                r += 1
                continue
                
            # the current char is in the cnt but exhausted
            if r != n and cnt[s[r]] == 0:
                while l != r and l != n and cnt[s[r]] == 0:
                    if s[l] in cnt: 
                        cnt[s[l]] += 1
                        balance += 1
                    l+=1
            
            # the current char is available,
            cnt[s[r]] -= 1
            balance -= 1
            r += 1
        
            # we need to contract here
            while l != r and l != n and balance == 0:
                if s[l] in cnt: 
                    break
                l += 1
            if balance == 0: 
                ans.append(l)

                
            
        return ans