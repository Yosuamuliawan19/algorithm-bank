class Solution:
    def reverseBits(self, n: int) -> int:
        
    
        ans_str = ""
        while n != 0:
            if n & 1 == 1:
                ans_str = ans_str + "1"
            else:
                ans_str = ans_str + "0" 
            n = n >> 1
        
        while len(ans_str) != 32:
            ans_str += '0'
        
        ans = 0
        binary = 1
        for i in range(31, -1, -1):
            if ans_str[i] == '1':
                ans += binary
            binary *= 2
        
        # print(ans_str, ans)
        return ans
            