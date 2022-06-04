class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        
        
        dirx = [1,1,0,1,-1,-1,-1,0]
        diry = [0,1,1,-1,0,1,-1,-1]
        
        n, m = len(grid), len(grid[0])
        vis = set()
        q = []
        
        if grid[0][0] == 1: return -1
        
        vis.add((0,0))
        heapq.heappush(q, (1,0,0))
        ans = -1
        
        while len(q) != 0:
            dis, i, j  = heapq.heappop(q)
            if i == n-1 and j == m-1:
                ans = dis
                break
            for k in range(8):
                x, y = i+dirx[k], j+diry[k]
                if (x,y) not in vis and x >= 0 and x < n and y >=0 and y < m and grid[x][y] == 0:
                    vis.add((x,y))
                    heapq.heappush(q, (dis+1, x,y))
                    
        return ans
            
            