class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        dirx = [0,0,-1,1]
        diry = [1,-1,0,0]
        st = []
        st.append([sr, sc])
        initial_color = image[sr][sc]
        if (initial_color == newColor):
            return image
        m, n = len(image), len(image[0])
        while (len(st) != 0):
            a, b = st[-1]
            image[a][b] = newColor
            st.pop()
            for i in range(4):
                x, y = a+dirx[i], b+diry[i]
                if (x >= 0 and x < m and y >= 0 and y < n and image[x][y] == initial_color):
                    st.append([x, y])
            
        
        
        return image
        
        