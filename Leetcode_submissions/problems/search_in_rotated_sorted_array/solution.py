class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        n = len(nums)
        
        
        def findSmallest():
            l, r = 0, n-1
            smallest = -1    
            while r >= l:
                m = l + int((r-l)/2)
                if nums[m] > nums[n-1]:
                    l = m+1
                else:
                    smallest = m
                    r = m-1  
            return smallest
        
        def binser(l, r):
            ans = -1
            while r >= l:
                m = l + int((r-l)/2)
                if nums[m] == target:
                    ans = m
                    break
                elif nums[m] < target: 
                    l = m+1
                else: 
                    r = m-1
            return ans
        
        smallest = findSmallest()
        ans = binser(0, smallest-1)
        if ans != -1: return ans
        ans = binser(smallest, n-1)
                
        return ans