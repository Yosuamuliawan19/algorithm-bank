class HitCounter:

    def __init__(self):
        
        self.dq = deque()
        
    def hit(self, timestamp: int) -> None:
        self.dq.append(timestamp)
        while self.dq and self.dq[0] <= timestamp - 300:
            self.dq.popleft()
        # print(self.dq)
    def getHits(self, timestamp: int) -> int:
        while self.dq and self.dq[0] <= timestamp - 300:
            self.dq.popleft()
        # print(timestamp, self.dq)
        return len(self.dq)


# Your HitCounter object will be instantiated and called as such:
# obj = HitCounter()
# obj.hit(timestamp)
# param_2 = obj.getHits(timestamp)