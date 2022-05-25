class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        
        
        if sum(nums) == 0: return '0'
        def myCmp(x, y):
            
            a = int(str(x)+str(y))
            b = int(str(y)+str(x))
            return b-a
        
        
        nums.sort(key=functools.cmp_to_key(myCmp))
        
        
        
        
        return "".join([str(num) for num in nums])