class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        dic = {}
        for idx, i in enumerate(nums):
            x = target - i
            if x in dic:
                return [dic[x], idx]
            dic[i] = idx
        return [-1,-1]