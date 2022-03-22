class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        dic = {}
        for i, n in enumerate(nums):
            
            x = target - n
            if x in dic:
                return [dic[x], i]
            else:
                dic[n] = i 
        return [0,0]