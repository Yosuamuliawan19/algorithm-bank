class Solution:
    def connectSticks(self, sticks: List[int]) -> int:
        
        
        
        
        pq = sticks
        heapq.heapify(pq)
        
        ans = 0
        
        
        while len(pq) != 1:
            
            a = heapq.heappop(pq)
            b = heapq.heappop(pq)
            
            ans += (a+b)
            heapq.heappush(pq, a+b)
            
            
        return ans
            