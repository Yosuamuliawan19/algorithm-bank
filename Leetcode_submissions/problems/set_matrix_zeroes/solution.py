class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
            
        n, m = len(matrix), len(matrix[0])
        
        for i in range(n):
            flag = False
            for j in range(m):
                flag = flag or matrix[i][j] == 0
                if flag and matrix[i][j] != 0: matrix[i][j] = float('inf')
            for j in range(m-1,-1,-1):
                flag = flag or matrix[i][j] == 0
                if flag and matrix[i][j] != 0: matrix[i][j] = float('inf')

        for j in range(m):
            flag = False
            for i in range(n):
                flag = flag or matrix[i][j] == 0
                if flag and matrix[i][j] != 0: matrix[i][j] = float('inf')
            for i in range(n-1,-1,-1):
                flag = flag or matrix[i][j] == 0
                if flag and matrix[i][j] != 0: matrix[i][j] = float('inf')
        
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == float('inf'):
                    matrix[i][j] = 0
        
        