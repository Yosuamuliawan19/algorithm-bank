class MedianFinder:

    def __init__(self):
        self.maxH = []
        self.minH = []
        
    def addNum(self, num: int) -> None:
        
        
        heapq.heappush(self.maxH, -num)
        
        # try to rebalance 
        
        while self.maxH and self.minH and -self.maxH[0] > self.minH[0]:
            cur = heapq.heappop(self.maxH)
            heapq.heappush(self.minH, -cur)
        
        while len(self.maxH) < len(self.minH) :
            cur = heapq.heappop(self.minH)
            heapq.heappush(self.maxH, -cur)
        
        while len(self.maxH) > len(self.minH) :
            cur = heapq.heappop(self.maxH)
            heapq.heappush(self.minH, -cur)
        
        # print(self.maxH, self.minH)        
        
    def findMedian(self) -> float:
        if (len(self.maxH) + len(self.minH)) % 2 != 0:
            return self.minH[0]
        else:
            return (-self.maxH[0] + self.minH[0]) / 2
        # n = len(self.hp)
        # m = int(n/2)
        # if n % 2 == 0 :
        #     print(n, m, m-1, self.hp)
        #     return (self.hp[m-1] + self.hp[m]) / 2
        # else:
        #     print(n, m, self.hp)
        #     return self.hp[m]
        
        
        
        # maxH, minH
        # 1, 2, 4, 5, 3, 
        # 1
        # 1 - 2
        # 1, 2 - 4
        # 1, 2 - 4, 5
        
        
        
        
        
        
        
        
            

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()