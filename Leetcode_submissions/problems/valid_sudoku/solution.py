class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n, col, row, q = 9, [0 for _ in range(9)], [0 for _ in range(9)], [[0 for _ in range(9)] for _ in range(9)]
        
        def toNum(c):
            return ord(c)-ord('0')-1
        
        
        for i in range(n):
            for j in range(n):
                
                if board[i][j] != '.':
                    row[toNum(board[i][j])] += 1
                    if row[toNum(board[i][j])]> 1: return False             
                    
                    quad = floor(j/3) * 3 + floor(i/3);
                    q[quad][toNum(board[i][j])] += 1
                    
                    if q[quad][toNum(board[i][j])] > 1: return False
                
                if board[j][i] != '.':
                    col[toNum(board[j][i])] += 1
                    if col[toNum(board[j][i])] > 1: return False
                
            col, row = [0 for _ in range(9)], [0 for _ in range(9)]

        return True