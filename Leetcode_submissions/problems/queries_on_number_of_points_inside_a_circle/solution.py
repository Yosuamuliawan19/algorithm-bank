class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        
        ans = []        
        
        for q in queries:
            cur = 0
            for p in points:
                dist = sqrt( abs(p[0]-q[0])**2 + abs(p[1]-q[1])**2 )    
                if (dist <= q[2]):
                    cur += 1
            ans.append(cur)
            
        return ans