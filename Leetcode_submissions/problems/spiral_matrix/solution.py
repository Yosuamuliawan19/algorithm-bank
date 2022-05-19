class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        
        dirs = [ (0,1), (1,0), (0,-1), (-1,0)]
        dir_idx = 0
        
        n, m = len(matrix), len(matrix[0])
        i, j = 0, 0
        
        ans = [matrix[0][0]]        
        vis = set()
        vis.add((0,0))

        while len(ans) != n*m:
            x, y = i + dirs[dir_idx][0], j + dirs[dir_idx][1]
            if x >= 0 and x < n and y >= 0 and y < m:    
                if (x,y) in vis:
                    dir_idx = (dir_idx+1)%4
                    continue
                else:
                    vis.add((x,y))
                    ans.append(matrix[x][y])
                    i,j = x,y
            else:
                dir_idx = (dir_idx+1)%4
                        
        return ans
            
            
            
            
            
        
        
        
        