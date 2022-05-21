class Solution:
    def minWindow(self, s: str, t: str) -> str:
        n, m = len(s), len(t)
        l, r = 0, 0 
        ans, mn_len = s, float('inf') 
        
        count1, mp = 0, {} # O(t)
        count2, mp2 = 0, {}  # O(t)
        
        # construct hashmap
        for i in range(m):  # O(t)
            if t[i] not in mp:
                count1 += 1
                mp[t[i]] = 1
            else:
                mp[t[i]] += 1
                
        # sliding window
        while l != n or r != n: # O(s)  
            if count2 < count1 and r != n: # while still have some requirement, and r != n
                if s[r] in mp:
                    mp2[s[r]] = 1 if s[r] not in mp2 else mp2[s[r]]+1
                    count2 = count2+1 if mp2[s[r]] == mp[s[r]] else count2
                r+=1
            else:
                if r-l < mn_len and count2 >= count1: # if requirement is met
                    ans = s[l:r]
                    mn_len = r-l
                if s[l] in mp: # free up some characters from the left pointer
                    mp2[s[l]] -= 1
                    count2 = count2-1 if mp2[s[l]] == mp[s[l]]-1 else count2
                l+=1
                
        return ans if mn_len != float('inf') else ""
    