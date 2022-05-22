class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        
        
        dirs = [(0,1), (1,0), (0, -1), (-1, 0)]
        n, m = len(board), len(board[0])
        word_len = len(word)
    
        def dfs(i, j, k):
            if k == word_len: 
                return True
            
            
            tmp = board[i][j]
            board[i][j] = '-'
            found = False
            
            for dir in dirs:
                next_x, next_y = i + dir[0], j + dir[1]
                if next_x >= 0 and next_x < n and next_y >= 0 and next_y < m and word[k] == board[next_x][next_y]:
                    if dfs(next_x, next_y, k+1):
                        board[i][j] = tmp
                        return True
                    
            board[i][j] = tmp
            return False
                
        
        for i in range(n):
            for j in range(m):
                if board[i][j] == word[0]: 
                    if dfs(i, j, 1): 
                        return True
                    
        return False
                    
                
                
        