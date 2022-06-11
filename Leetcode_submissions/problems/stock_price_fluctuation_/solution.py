class StockPrice:

    def __init__(self):
        
        self.max_timestamp = -1
        self.timestamp_to_val = {}
        
        self.max_pq = []
        self.min_pq = []
        
        '''
        stock = max, min, latest
        
        correction = max, min
        
        max_pq = (value, timestamp)
        while max_pq.top[0] != self.timestamp_to_val[max_pq.top[0]]:
            max_pq.pop()
            correction.remove(max_pq.top[1])
    
        
        '''
        

    def update(self, timestamp: int, price: int) -> None:
        # update current
        self.max_timestamp = max(self.max_timestamp, timestamp)
        self.timestamp_to_val[timestamp] = price
    
        # update max, min
        heapq.heappush(self.max_pq, (-price, timestamp))
        heapq.heappush(self.min_pq, (price, timestamp))
        

    def current(self) -> int:
        return self.timestamp_to_val[self.max_timestamp] 

    def maximum(self) -> int:
        while True:
            top_val, top_timestamp = heapq.heappop(self.max_pq)
            top_val = -top_val
            if top_val != self.timestamp_to_val[top_timestamp]: continue
                
            heapq.heappush(self.max_pq,(-top_val, top_timestamp)) 
            return top_val    
                
    def minimum(self) -> int:
        while True:
            top_val, top_timestamp = heapq.heappop(self.min_pq)
            
            if top_val != self.timestamp_to_val[top_timestamp]: continue
                
            heapq.heappush(self.min_pq, (top_val, top_timestamp)) 
            return top_val    
        


# Your StockPrice object will be instantiated and called as such:
# obj = StockPrice()
# obj.update(timestamp,price)
# param_2 = obj.current()
# param_3 = obj.maximum()
# param_4 = obj.minimum()