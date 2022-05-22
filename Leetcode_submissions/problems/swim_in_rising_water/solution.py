class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        n = len(grid)
        
        visited = set([0,0])
        pq = [[grid[0][0], [0, 0]]]  # (dist, x, y)
        ans = -float('inf')
        dirs = [(0,1), (1,0), (0, -1), (-1, 0)]
        
        while len(pq) > 0:
            cost, [i, j] = heapq.heappop(pq)
            if i == n-1 and j == n-1:
                ans = cost
                break
            if (i,j) in visited:
                continue
            visited.add((i, j))
              
            for x, y in dirs:
                next_i, next_j =  i + x, j + y
                if next_i >= 0 and next_i < n and next_j >= 0 \
                and next_j < n and (next_i, next_j) not in visited:
                    next_cost = max(cost, grid[next_i][next_j])
                    heapq.heappush(pq, (next_cost, [next_i, next_j]))

        return ans
