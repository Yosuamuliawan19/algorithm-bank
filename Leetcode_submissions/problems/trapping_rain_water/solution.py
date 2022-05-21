class Solution:
    def trap(self, height: List[int]) -> int:
    
        arr = [] # (cnt, min, max)
        for idx, h in enumerate(height):
            while h >= len(arr):
                arr.append([0, float('inf'), float('-inf')])
            arr[h][0] += 1
            arr[h][1] = min(arr[h][1], idx)
            arr[h][2] = max(arr[h][2], idx)
    
        ans = 0
        l, r, toPass = float('inf'), float('-inf'), 0
        
        for h in range(len(arr)-1, 0, -1):
            
            # adjust left and right
            if arr[h][0] != 0:
                l, r = min(l, arr[h][1]), max(r,  arr[h][2])
                
            # count occupied beams
            occupied = arr[h][0] + toPass
            
            if occupied >= 2:
                amount = (r-l-1) - (occupied-2) 
                ans += amount
            toPass += arr[h][0]
            

        return ans