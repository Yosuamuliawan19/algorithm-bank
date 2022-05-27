class Solution:
    def reverse(self, x: int) -> int:

        isNeg = False
    
        if x < 0:
            isNeg = True
            x *= -1
        
        mod = 2**31 - 1 if not isNeg else 2**31 
            
        # generate reverse rray
        arr = []
        while x != 0:
            arr.append(x % 10) 
            x = int(x / 10)
    
        # eliminate all the zeros
        idx = 0
        while idx != len(arr) and arr[idx] == 0: idx += 1
        
        ans = 0
        for i in range(idx, len(arr)):
            ans = ((ans*10) + arr[i]) 
            if ans > mod:
                return 0

        return ans if not isNeg else -1 * ans
        
        
        
            
            
        
        