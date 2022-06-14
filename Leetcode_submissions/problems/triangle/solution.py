class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
            
            
        n = len(triangle)
        
        @cache
        def dfs(i, j):
            if i == n:
                return 0
           
            res = min(dfs(i+1, j), dfs(i+1, j+1))
            
            return res + triangle[i][j]
        
        return dfs(0, 0)
    
        '''
        0,0 
        1,0 - 1,1
        2,0 2, 1  2,1
        
        
        '''
            