class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        
        
        
        pq = [] # (-value, idx)
        ans, idx, n = 0, 0, len(nums)
        
        while idx != k:
            heapq.heappush(pq, (-nums[idx], idx))
            ans = max(ans, nums[idx])
            idx += 1

        ans_arr = [ans]
        while idx != n:
            # while the pq isnt empty, and the top is outside. Once found inside, then set the max
            while pq and pq[0][1] < idx-k+1:
                heapq.heappop(pq)
                
            # push the current element to the pq
            heapq.heappush(pq, (-nums[idx], idx))
            
            # get the window max
            window_max = -pq[0][0]
            # print('l,r', idx-k, idx, 'prev,cur,window_max', window_max )
            ans_arr.append(window_max)
            idx += 1

        return ans_arr    
        