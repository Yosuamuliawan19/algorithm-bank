class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:

        st = set()
        pq = []
        
        for cur in intervals:
            heapq.heappush(pq, tuple(cur))
        ans = 0 
        
        while pq: 
            ans += 1
            next_pq = []
            prev = heapq.heappop(pq)
            while pq:
                next = heapq.heappop(pq)
                if prev[1] > next[0]:
                    heapq.heappush(next_pq, next)
                else:
                    prev = next
            pq = next_pq
        return ans