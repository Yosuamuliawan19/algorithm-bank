class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
    
        
        
        n = len(nums)
        nums.sort()
        ans = nums[0] + nums[1] + nums[2]
        
        for i in range(n-2):
            l, r = i+1, n-1
            
            while (r > l):
                cur = nums[i] + nums[l] + nums[r]
                
                if abs(target-cur) < abs(target-ans): ans = cur
                
                if cur == target: return target
                
                if cur > target: r -= 1
                else: l +=  1
        
        return ans
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        