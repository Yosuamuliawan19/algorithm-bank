class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        
        
        ways = [[0 for _ in range(n)] for _ in range(m)]
        ways[0][0] = 1
        for i in range(m):
            for j in range(n):
                if i != 0:
                    ways[i][j] += ways[i-1][j]
                if j != 0:
                    ways[i][j] += ways[i][j-1]
            
            
        return ways[m-1][n-1]
                