class Solution:
    def countBits(self, n: int) -> List[int]:

        ans = []
        for i in range(n + 1):
            x = i
            cur = 0
            while x != 0:
                if x & 1 == 1:  cur += 1
                x = x >> 1         
            ans.append(cur)
        
        return ans