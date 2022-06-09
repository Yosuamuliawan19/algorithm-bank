class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        
        n = len(numbers)
        l, r = 0, n - 1
        
        
        while r > l:
            cur = numbers[l] + numbers[r]
            if cur == target:
                return [l+1, r+1]
            
            if cur > target:
                r -= 1
            else:
                l += 1
        
        return [-1, -1]
            
            