class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        
        
        self.nums = nums
        self.n = len(nums)
        self.ans = []
        
        def recurse(current, count,  bitmask):
            if count == self.n:
                self.ans.append(current)
                return
            for i in range(self.n):
                if not (bitmask & (1 << i)):
                    recurse(current + [self.nums[i]], count + 1, bitmask | (1<<i))
        recurse([], 0, 0)
        
        return self.ans