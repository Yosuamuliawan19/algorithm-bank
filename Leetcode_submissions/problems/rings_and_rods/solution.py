class Solution:
    def countPoints(self, rings: str) -> int:    
        count = {}
        
        for i in range(0, len(rings), 2):
            if rings[i+1] not in count: count[rings[i+1]] = set()
            count[rings[i+1]].add(rings[i])
            
        cnt = 0
        for cur in count.values():
            if len(list(cur)) == 3: cnt += 1
                
        return cnt
            
            