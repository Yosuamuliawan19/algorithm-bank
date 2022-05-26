class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        
        m, n = len(board), len(board[0])
        c = 1 
        dirs = [(1,0), (0,1), (-1,0), (0,-1)]
        visited = set()
        reachBorder = set()
        
        def isBorder(x, y):
            return x == 0 or y == 0 or x == m-1 or y == n-1
                
        def dfs(i, j, c):
            visited.add((i,j))
            if not isBorder(i,j): board[i][j] = c
            if isBorder(i,j): reachBorder.add(c)
                
            for dir in dirs:
                x, y = i + dir[0], j + dir[1]
                if x >= 0 and x < m and y >= 0 and y < n and \
                    (x,y) not in visited and board[x][y] == 'O':
                    dfs(x, y, c)                
    
        for i in range(m):
            for j in range(n):
                if not isBorder(i, j) and board[i][j] == 'O' and (i,j) not in visited:
                    dfs(i,j, c)
                    c += 1
                    
        for i in range(1, m-1):
            for j in range(1, n-1):
                if board[i][j] in reachBorder: board[i][j] = 'O'
                else: board[i][j] = 'X'
                

        return board