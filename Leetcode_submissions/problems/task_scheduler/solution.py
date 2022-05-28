from collections import defaultdict
class Solution:
    def leastInterval(self, tasks: List[str], k: int) -> int:
        
        '''
        
        n = 2
        
        A = 6
        rest = 6
        
        
        6 + 5*2
        
        Example 1
        
        3 + 2*2 # room to fit in 
        3 + 2*2
        
        
        
        
        # space between 
        
        
        # get either the top of the stack if possible, or put new character
        
        
        '''
        
        
    
        counts = defaultdict(int)
        for task in tasks: counts[task] += 1    
        counts = sorted(list(counts.values()), reverse=True)    
        n = len(counts)
        print('counts', counts, sum(counts))    
        
        
#         # priority queue approach        
#         new_number_idx = 1
#         pq = [(k+1, -1*(counts[0]-1))]
#         time = 1

#         while len(pq)!=0 or new_number_idx!=n:
#             if len(pq)!=0 and pq[0][0] <= time:
#                 print('getting from q', time, pq[0][0], -pq[0][1])
#                 prev_cnt = pq[0][1]
#                 heapq.heappop(pq)
#                 if prev_cnt + 1 < 0: 
#                     heapq.heappush(pq, (time+k+1, prev_cnt + 1))
#             elif new_number_idx < n:
#                 print('getting from new number')
#                 if counts[new_number_idx] >= 1: 
#                     heapq.heappush(pq, (time+k+1, -1*(counts[new_number_idx]-1)))
#                 new_number_idx += 1
#             time += 1
#         return time



        pq = [-cnt for cnt in counts]
        heapq.heapify(pq)
        q = deque()
        time = 0
        
        while q or pq:
            time += 1
            
            if pq: 
                left = 1+heapq.heappop(pq)
                if left != 0:
                    q.append((left, time + k))
                
            if q and q[0][1] == time:
                heapq.heappush(pq, q.popleft()[0])
            
        return time 
        
        
        
        
#         n = 2
#         0 1 2 3 
        
#         0 + 2 + 1 = 3 
        
        
        
        
#         # brute force approach
#         no_segments = counts[0]
#         segments = [0 for  _ in range(no_segments)]
#         for i in range(0, n):
#             idx =  0
#             while counts[i] != 0:
#                 # add the number to the available segment
#                 segments[idx] += 1
#                 counts[i] -= 1
#                 idx = (idx + 1) % no_segments
    
                
#         print('segments', segments, len(segments))
#         print('sum', sum(segments))
     
#         ans = 0 
#         for i in range(no_segments): 
#             if i == no_segments-1: ans += segments[i]
#             else: ans += max(k+1, segments[i])

#         return ans