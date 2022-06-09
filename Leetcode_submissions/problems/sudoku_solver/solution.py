class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        
        
        col, row, quad = {}, {}, {}
        
        for i in range(9):
            col[i] = set()
            row[i] = set()
            
        for i in range(3):
            for j in range(3):
                quad[(i,j)] = set()
         
        n, m = len(board), len(board[0])
        
        pos = []
        
        self.ans = None
        
        found = False
        
        def backtrack(idx, row, col, quad):
            nonlocal found
            if found: return 
            if idx == len(pos):
                self.ans = board
                found = True
                return 

            for k in range(9):
                i,j = pos[idx]
                q = (int(i/3),int(j/3))
                val = chr(ord('1') + k)
                if val not in row[i] and val not in col[j] and val not in quad[q]:
                    row[i].add(val)
                    col[j].add(val)
                    quad[q].add(val)
                    board[i][j] = val
                    backtrack(idx+1, row, col, quad)
                    if found: return 
                    board[i][j] = '.'
                    row[i].remove(val)
                    col[j].remove(val)
                    quad[q].remove(val)
                    

        for i in range(n):
            for j in range(m):
                if board[i][j] == '.':
                    pos.append((i,j))
                    continue
                q = (int(i/3),int(j/3))
                row[i].add(board[i][j])
                col[j].add(board[i][j])
                quad[q].add(board[i][j])
                
        backtrack(0, row, col, quad)
        
        return self.ans
        
        
        