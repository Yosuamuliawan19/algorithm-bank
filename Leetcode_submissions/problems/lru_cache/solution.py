class LRUCache:

    def __init__(self, capacity: int):
        self.n = capacity
        self.timestamp = 0
        
        
        self.keyValues = {}
        self.lastUsed = {}
        self.q = []
        
        
    def get(self, key: int) -> int:
        if key not in self.keyValues: return -1
            
        self.q.append((self.timestamp, key))    
        self.lastUsed[key] = self.timestamp
        self.timestamp += 1
        
        return self.keyValues[key]
        

    def put(self, key: int, value: int) -> None:

        self.keyValues[key] = value 
        self.q.append((self.timestamp, key))
        self.lastUsed[key] = self.timestamp
        self.timestamp += 1
        
        while len(self.keyValues.keys()) > self.n:
            least_used_timestamp, least_used_key = self.q.pop(0)
            if self.lastUsed[least_used_key] == least_used_timestamp:
                del self.keyValues[least_used_key]
        
        
            
            
            
            
            
            
            
        
        
        
        
        
    # pq = (timestamp, key)
    # t, k = heapq.heappop(pq)
    # delete mp[k] 
    # 
    


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)