class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        
        m, n = len(matrix), len(matrix[0])
        l, r = 0, n*m - 1
        
        
        while (r >= l):
            mid = l + int((r-l)/2)
            i, j = int(mid/n), mid % n
            if (matrix[i][j] == target):
                return True
            elif (matrix[i][j] < target):
                l = mid +1
            else:
                r = mid -1
        return False