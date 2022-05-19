class Solution:
    def knightProbability(self, n: int, k: int, row: int, column: int) -> float:
        
        
        
        
        dirs = [(2,1), (2,-1), (1, 2), (1, -2), (-2, 1), (-2, -1), (-1, 2), (-1, -2)]

        @lru_cache(maxsize=None)
        def rec(i, j, step):
            if not (i >= 0 and i < n and j >= 0 and j < n):
                return 0
        
            if step == 0:
                return 1

            ans = 0
            for dir in dirs:
                ans += rec(i+dir[0], j+dir[1], step-1)
            return ans
                
        return rec(row, column, k) / (8**k)
            
            
            
        
        