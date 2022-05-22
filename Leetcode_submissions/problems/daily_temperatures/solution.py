class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
            
        n = len(temperatures)
        ans = [0 for _ in range(n)]
        
        stack = []
        for i in range(n):
            while len(stack) != 0 and stack[-1][0] < temperatures[i]:
                prev, idx = stack.pop()
                ans[idx] = i-idx
            stack.append((temperatures[i], i))

        return ans
        
        