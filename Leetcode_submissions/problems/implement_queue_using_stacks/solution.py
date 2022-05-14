class MyQueue:


    def __init__(self):
        self.st = []
        self.idx = 0

    def push(self, x: int) -> None:
        self.st.append(x)

    def pop(self) -> int:
        
        n = len(self.st)
        ans = self.st[-1*n + self.idx]
        
        self.idx += 1
        
        return ans

    def peek(self) -> int:
        n = len(self.st)
        ans = self.st[-1*n +  self.idx]
        return ans

    def empty(self) -> bool:
        return self.idx == len(self.st)

    # [1, 2]
    # idx = 0
    # -2+0 = -2

# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()