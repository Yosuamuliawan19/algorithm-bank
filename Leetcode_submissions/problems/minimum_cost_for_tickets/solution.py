class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        
        
        
        days.sort()
        
        mx = days[-1]
        
        n = len(days)
        
        
        @cache
        def dp(i):
            if i == n: return 0
           
            idx = i
            a = dp(idx+1) + costs[0]        
            
            
            idx = i
            while idx!=n and days[idx] < days[i]+7: idx += 1 
            b = dp(idx) + costs[1]
            
            while idx!=n and days[idx] < days[i]+30: idx += 1 
            c = dp(idx) + costs[2] 
                        
            return min(a,b,c)        
            
            
        return dp(0)