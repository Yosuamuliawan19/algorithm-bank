class Solution:
    def findMin(self, arr: List[int]) -> int:
        
        
        n = len(arr)
        l, r = 0, n
        ans = -1
        while r >= l:
            m = l + int((r-l)/2)
            if arr[m] > arr[n-1]:
                l = m+1
            else:
                r = m-1
                ans = arr[m]
                
        return ans        
            
        
        
        
        
        