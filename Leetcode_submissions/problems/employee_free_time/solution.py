"""
# Definition for an Interval.
class Interval:
    def __init__(self, start: int = None, end: int = None):
        self.start = start
        self.end = end
"""

class Solution:
    def employeeFreeTime(self, schedule: '[[Interval]]') -> '[Interval]':
        
        
        
        '''
        
        merge the times of every employee, starting from the first employee / remaining employees
        
        '''
        
        combined = []
        
        for e in schedule:
            for i in e: combined.append((i.start, i.end))
                
        combined.sort()
                
        n = len(combined)
        idx = 0
        arr = []
        
        while idx != n:
            base = combined[idx]
            idx += 1
            while idx != n and base[1] >= combined[idx][0]:
                base = (base[0], max(base[1], combined[idx][1]))
                idx += 1
            arr.append(base)
            
        m = len(arr)
        ans = []
        for i in range(m-1):
            ans.append(Interval(arr[i][1], arr[i+1][0]))
        
        return ans
                    
                