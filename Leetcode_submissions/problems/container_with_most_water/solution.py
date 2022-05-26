class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        
        u_height = set() # [h3, h2, h1]
        h_indices = {} # h -> [idx1, idx2]
        for i, h in enumerate(height): 
            u_height.add(h)
            
            if h in h_indices: h_indices[h].append(i)
            else: h_indices[h] = [i]
        
        u_height = sorted(list(u_height), reverse=True)
        
        ans = 0
        l, r = float('inf'), float('-inf')
        for h in u_height:
            l, r = min(l, h_indices[h][0]), max(r, h_indices[h][-1])            
            ans = max(ans, (r-l) * h )

        return ans
        