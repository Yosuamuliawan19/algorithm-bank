class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:

        
        
        n = len(matrix)
        m = len(matrix[0])
        dirs = [(1,0),(0,1),(-1,0),(0,-1)]
        
        vis = set()
        memo = {}
        
        def dfs(i, j):
            if (i,j) in memo:
                return memo[(i,j)]
            
            vis.add((i,j))
            l = 1
            for dir in dirs:
                x, y = i+dir[0], j+dir[1]
                if x>=0 and x<n and y>=0 and y<m \
                    and (x,y) not in vis and matrix[i][j] < matrix[x][y]:
                    l = max(l, dfs(x,y) + 1)
            
            vis.remove((i,j))
            memo[(i,j)] = l
            return l
            
        ans = 0    
        for i in range(n):
            for j in range(m):
                ans = max(ans, dfs(i,j))
        
        return ans