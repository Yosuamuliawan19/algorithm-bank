class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        intervals.sort()
        
        n = len(intervals)
        
        for i in range(n-1):
            
            a, b = intervals[i], intervals[i+1]
            
            if a[1] > b[0]:
                
                return False
        
        return True