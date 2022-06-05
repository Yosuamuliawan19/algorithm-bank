class Solution:
    def knightDialer(self, n: int) -> int:
        
        
        locs = {
            0:[4, 6],
            1:[6, 8],
            2:[7, 9],
            3:[4, 8],
            4:[0, 3, 9],
            5:[],
            6:[0, 1, 7],
            7:[2, 6],
            8:[1, 3],
            9:[2, 4]
        }        
        mod = 1e9 + 7
        
        @lru_cache(maxsize=None)
        def dp(l, num):
            if l == n: return 1
            cur = 0
            for loc in locs[num]: 
                cur = (cur + dp(l+1, loc)) % mod
            return int(cur % mod)
                
        ans = 0
        for loc in range(10): 
            ans = (ans + dp(1, loc)) % mod
        return int(ans)