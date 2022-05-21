class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        
        
        
        intervals.sort()
        
        ans = []
        
        i, n = 0, len(intervals)
        
        while i <= n-1:
            # print(i, intervals[i])
            start = intervals[i][0]
            end = intervals[i][1]
            
            while i != n-1 and end >= intervals[i+1][0] :
                end = max(end, intervals[i+1][1])    
                i += 1
            
            ans.append([start, end])
            i += 1
                
        return ans