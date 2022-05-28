class Solution:

    
    def __init__(self, w: List[int]):
        self.prefixSum = []
        self.n = len(w)
        self.cnt = 0
        self.idx = 0
        
        sum = 0 
        for i in range(self.n):
            sum += w[i]
            self.prefixSum.append(sum)
        for i in range(self.n):
            self.prefixSum[i] =  self.prefixSum[i] * 100 / sum
        
    def pickIndex(self) -> int:
        index = random.randint(0, 100)
        return bisect.bisect_left(self.prefixSum, index)


# Your Solution object will be instantiated and called as such:
# obj = Solution(w)
# param_1 = obj.pickIndex()