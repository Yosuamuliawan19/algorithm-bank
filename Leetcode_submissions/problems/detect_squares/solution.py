class DetectSquares:

    def __init__(self):
        self.mp = defaultdict(int)

    def add(self, point: List[int]) -> None:
        
        self.mp[tuple(point)] += 1

    def count(self, point: List[int]) -> int:
        ans = 0
        for candidate in self.mp.keys():
            
            if candidate[0] == point[0] or candidate[1] == point[1] or \
              abs(candidate[0]-point[0]) != abs(candidate[1]-point[1])  : continue
                
            a, b = (candidate[0], point[1]), (point[0], candidate[1] )            
            
            if a in self.mp and b in self.mp:
                ans += self.mp[candidate] * self.mp[a] * self.mp[b]              
            
        return ans

# Your DetectSquares object will be instantiated and called as such:
# obj = DetectSquares()
# obj.add(point)
# param_2 = obj.count(point)