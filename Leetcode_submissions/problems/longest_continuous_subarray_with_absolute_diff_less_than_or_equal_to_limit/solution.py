from heapq import heappush, heappop, heapify

class Solution:
    def longestSubarray(self, nums: List[int], k: int) -> int:
        
        
        n = len(nums)
        l, r = 0, 1
        ans = 1
        
        minHeap = [(nums[0], 0)]
        maxHeap = [(-nums[0], 0)]
        
        # print('----')
        while r < n:
            # while valid
            while r < n and abs((-maxHeap[0][0]) - minHeap[0][0]) <= k:
                heappush(minHeap, (nums[r], r))
                heappush(maxHeap, (-nums[r], r))
                r += 1
                            
            ans = max(ans, r-l-1)
            
            if r == n: 
                if abs((-maxHeap[0][0]) - minHeap[0][0]) <= k: 
                    ans = max(ans, r-l)
                break

            # while invalid
            while l < r and abs((-maxHeap[0][0]) - minHeap[0][0]) > k and len(minHeap)!=0 and len(maxHeap)!=0:
                while len(maxHeap)!=0 and maxHeap[0][1] <= l: heappop(maxHeap)
                while len(minHeap)!=0 and minHeap[0][1] <= l: heappop(minHeap)
                l+=1
                
            if l == r:
                l += 1
                r += 1
        
        return ans
            
            
            