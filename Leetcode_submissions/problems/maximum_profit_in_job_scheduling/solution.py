class Solution:
    def jobScheduling(self, startTime: List[int], endTime: List[int], profit: List[int]) -> int:
        
        
        
        arr, n = [], len(startTime)
        def myCmp(x, y):
            return x[0] - y[0]
        for i in range(n):
            arr.append((startTime[i], endTime[i], profit[i]))
        arr.sort(key=functools.cmp_to_key(myCmp))
        
        jobs = sorted(list(zip(startTime, endTime, profit)))
        startTime = [jobs[i][0] for i in range(n)]
        
        
        @lru_cache(maxsize=None)
        def dp(i):
            if i == n: return 0
            ans = dp(i+1)
        
            # binary search
            l, r = 0, n
            while r > l:
                m = l + int((r-l)/2)
                if startTime[m] >= arr[i][1] : r = m
                else: l = m + 1
            
            ans = max(ans, dp(r) + arr[i][2])  
            return ans
        
        return dp(0)

        
        
