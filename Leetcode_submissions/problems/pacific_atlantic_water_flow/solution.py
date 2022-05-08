class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        n, m = len(heights), len(heights[0])
        mat, vis = [[0 for _ in range(m)]for _ in range(n)] ,[[0 for _ in range(m)]for _ in range(n)]
        dirx = [0,0,-1,1]
        diry = [-1,1,0,0]
        
        def dfs(i, j, isPC, mat, vis):
            if vis[i][j]:
                return 
            vis[i][j] = 1
            mat[i][j] = mat[i][j] | (1 if isPC else 2)
            for k in range(4):
                x, y = i + dirx[k], j + diry[k]
                if (x >= 0 and x < n and y >= 0 and y < m and vis[x][y] == 0 and heights[x][y] >= heights[i][j]):
                    dfs(x, y, isPC, mat, vis)
                
        # pacific ocean
        for i in range(n):
            dfs(i, 0, True, mat, vis)
        for i in range(m):
            dfs(0, i, True, mat, vis)

        vis = [[0 for _ in range(m)]for _ in range(n)]

        # atlantic 
        for i in range(n):
            dfs(i, m-1, False, mat, vis)
        for i in range(m):
            dfs(n-1, i, False, mat, vis)


        print(mat)
        ans = []
        for i in range(n):
            for j in range(m):
                if (mat[i][j] == 3):
                    ans.append([i, j])
                
        
        return ans
        
        
        
        
        
        
        