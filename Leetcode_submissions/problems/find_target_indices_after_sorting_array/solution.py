class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        
        nums.sort()
            
        l, r = 0, len(nums)-1
        
        target_idx = -1
        
        while r >= l:
            m = l + int((r-l)/2)
            if nums[m] == target: 
                target_idx = m
                break
            elif nums[m] > target: r = m - 1
            else: l = m + 1
        
        if target_idx == -1: return []
        
        ans = []
        
        idx = target_idx-1
        while idx >= 0 and nums[idx] == target:
            ans.append(idx)
            idx -= 1
        ans.reverse()
        ans.append(target_idx)
        
        idx = target_idx+1
        while idx < len(nums) and nums[idx] == target:
            ans.append(idx)
            idx += 1
        
        return ans
        
        
        
        
        