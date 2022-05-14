class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        
        dirx = [0,0,-1,1]
        diry = [1,-1,0,0]
        n, m = len(mat), len(mat[0])
        
        q = []
        
        for i in range(n):
            for j in range(m):
                if mat[i][j] == 0:
                    q.append((0, i, j))
                else:
                    mat[i][j] = 1e5
        
        while q: 
            dis, i,j  = heapq.heappop(q)
            # print(i, j, dis)
            for k in range(4):
                x, y = i + dirx[k], j + diry[k]
                if x >= 0 and x < n and y >= 0 and y < m and mat[x][y] > dis+1:
                    mat[x][y] = min(mat[x][y], dis+1)
                    heapq.heappush(q, (mat[x][y], x, y))
                    
        
        return mat
                    
                    