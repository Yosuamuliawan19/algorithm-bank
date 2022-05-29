class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        
        
        
        # bucket sort
        
        pq = []
        
        for i in range(len(nums)):
            heapq.heappush(pq, nums[i])
            
            if len(pq) > k:
                heapq.heappop(pq)
            
        return heapq.heappop(pq)
        
        
        
        
        