class Solution:
    def averageWaitingTime(self, cus: List[List[int]]) -> float:
        n = len(cus)
        
        time, curtime = [], 0
        for i in range(n):
            if (i == 0):
                time.append(cus[i][1])
                curtime = cus[i][0] + cus[i][1]
            else:
                curtime = max(curtime, cus[i][0])
                time.append(curtime + cus[i][1] - cus[i][0])
                curtime+= cus[i][1]

        ans = 0
        for i in range(n):
            ans += time[i]
        return ans / n
        
            