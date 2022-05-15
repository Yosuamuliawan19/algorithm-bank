class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
            
        fresh, rot = 0, 0
        n, m = len(grid), len(grid[0])
        
        # generate initial queue
        q = []
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 2:
                    rot += 1
                    heapq.heappush(q, (0, i, j))
                elif grid[i][j] == 1:
                    fresh += 1
        
        # check for base case
        if fresh == 0:
            return 0
        if rot == 0:
            return -1
        
        # multi-source dijkstra algo
        dirs = [[0, 1], [0, -1], [1, 0], [-1, 0]]
        ans = 0
        while len(q) != 0:
            dis, curx, cury  = heapq.heappop(q)
            for dir in dirs:
                x, y = curx + dir[0], cury + dir[1]
                if x >= 0 and x < n and y >= 0 and y < m and grid[x][y] == 1:
                    grid[x][y] = 2
                    ans = max(ans, dis+1)
                    fresh -= 1
                    heapq.heappush(q, (dis+1, x, y))
        
        # check if exhausted
        if fresh != 0:
            return -1
        
        return ans
        
            
        
        
        
        
        
        