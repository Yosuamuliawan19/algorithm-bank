class TimeMap:

    def __init__(self):
        
        self.values = defaultdict(list)
        
    def set(self, key: str, value: str, timestamp: int) -> None:
        
        self.values[key].append((timestamp, value))
        

    def get(self, key: str, timestamp: int) -> str:
        
        if key not in self.values: return ""
        
        arr = self.values[key]
        
        ans = ""
        l, r = 0, len(self.values[key])-1
        while r >= l:            
            m = l + int((r-l)/2)
            if arr[m][0] <= timestamp:
                l = m + 1
                ans = arr[m][1]               
            else:
                r = m - 1
        return ans
        
        
        
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)