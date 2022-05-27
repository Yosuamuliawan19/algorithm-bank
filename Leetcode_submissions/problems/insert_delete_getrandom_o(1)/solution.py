class RandomizedSet:
    
    def __init__(self):
        self.mp = {}
        self.n = 0
        self.arr = []

    def insert(self, val: int) -> bool:
        if val in self.mp:
            return False
        
        self.arr.append(val)
        self.mp[val] = self.n
        # print('insert', val, self.n)
        self.n += 1
        return True

    def remove(self, val: int) -> bool:
        if val in self.mp:
            self.arr[self.mp[val]] = -1
            del self.mp[val]
            return True
        
        return False

    def getRandom(self) -> int:
        
        
        idx = random.randint(0, len(self.mp.keys())-1)
        # print(list(self.mp.keys()), idx, self.arr)
        key = list(self.mp.keys())[idx]
        
        return self.arr[self.mp[key]]
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()