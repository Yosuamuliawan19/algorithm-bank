class Solution:
    def countBattleships(self, board: List[List[str]]) -> int:
        
        
        n, m = len(board), len(board[0])
        ans = 0
        dirs = [(1,0), (0, 1), (-1, 0), (0,-1)]
        
        
        def dfs(i, j):
            board[i][j] = '.'
            for dir in dirs: 
                x, y = i+dir[0], j+dir[1]
                if x >= 0 and x < n and y >= 0 and y < m and board[x][y] == 'X':
                    dfs(x, y)
                    
        for i in range(n):
            for j in range(m):
                if board[i][j] == 'X':
                    dfs(i, j)
                    ans += 1
         
        return ans