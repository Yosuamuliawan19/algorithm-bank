"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        
        
        mp = {}
        
        for e in employees:
            mp[e.id] = e
        
        
        @lru_cache(maxsize=None)
        def dp(i):
            sum = mp[i].importance
            for next in mp[i].subordinates:
                sum += dp(next)
            return sum
        
        return dp(id)
            
            
        