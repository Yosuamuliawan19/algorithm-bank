class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """

        
#         3/2 = 1
#         4/2 = 2
        
        n = len(matrix)
        
        rims = int(n/2)
        
        length = n 
            
        
        for rim in range(rims):
            for l in range(length-1):
                
                
                y, x = rim, rim + l
                disy, disx = l, length - l - 1
                # print(rim, y, x, disy, disx)
                
                
                
                
                # disy = 1, disx = 2
                
                # 0, 1 -> 0+1, 1+2
                # 1, 3 -> 1+2, 3-1
                # 3, 2 -> 3-1, 2-2
                # 2, 0 -> 0, 1
                
                tmp = matrix[y][x]
                # print('- ', [x,y], [y+disx,x-disy], matrix[y][x],'replaced by', matrix[y+disx][x-disy])
                matrix[y][x] = matrix[y+disx][x-disy]
                # print('- ', [y+disx,x-disy], [y+disx+disy,x-disy+disx],  matrix[y+disx][x-disy], 'replaced by', matrix[y+disx+disy][x-disy+disx])
                matrix[y+disx][x-disy] = matrix[y+disx+disy][x-disy+disx]
                # print('- ',[y+disx+disy, x-disy+disx], [y+disy,x+disx],  matrix[y+disx+disy][x-disy+disx], 'replaced by', matrix[y+disy][x+disx])
                matrix[y+disx+disy][x-disy+disx] = matrix[y+disy][x+disx]
                # print('- ',[y+disy,x+disx], [x,y], matrix[y+disy][x+disx] , 'replaced by', tmp)
                matrix[y+disy][x+disx] = tmp
                # hor = 3, ver = 1
                # 3, -1
                # -1, -3
                # -3, 1
                # 1, 3
            
            length -= 2
            
            
            
            
            
        
        
        
        
        
        
        