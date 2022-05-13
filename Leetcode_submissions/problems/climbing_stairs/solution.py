class Solution:
    def climbStairs(self, n: int) -> int:
        
        arr = [1, 1]
        if (n <= 2):
            arr[n-1]
        
        i = 2
        while len(arr) <= n:
            arr.append(arr[i-1] + arr[i-2])
            i += 1
        
        return arr[-1]
            
        
        