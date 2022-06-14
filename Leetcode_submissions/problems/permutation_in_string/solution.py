class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        n, m = len(s1), len(s2)
        
        l, r = 0, 0
        
        ans = False
        
        balance = defaultdict(int)
        for c in s1: balance[c] += 1
            
        taken = defaultdict(int)
        for k in balance.keys(): taken[k] = 0

        while r < m:
            
            # While condiiton is true
            while r < m and s2[r] in taken and taken[s2[r]] < balance[s2[r]]:
                taken[s2[r]] += 1
                r += 1
            
            # Check if meet condition or meet end
            if r-l == n: return True
            if r == m: break
            
            # While condition is false
            while l < r and (s2[r] not in taken or taken[s2[r]] == balance[s2[r]]):
                if s2[l] in taken: taken[s2[l]] -= 1
                l += 1
            
            # Check if still invalid, if yes, create new start
            if l == r:  l, r = l+1, r+1

        return ans
            