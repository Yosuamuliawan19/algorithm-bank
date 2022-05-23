class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        
        intervals.sort()
        
        n = len(intervals)
        
        ans = 0
        
        for i in range(1, n):
            
            if intervals[i][0] >= intervals[i-1][1]:
                continue
            intervals[i][1] = min(intervals[i][1], intervals[i-1][1])
            
            ans += 1
            
        return ans
            
            
            