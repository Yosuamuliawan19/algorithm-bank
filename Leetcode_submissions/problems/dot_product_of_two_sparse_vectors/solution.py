class SparseVector:
    def __init__(self, nums: List[int]):
        
        self.mp = defaultdict(int)
        n = len(nums)
        for i in range(n):
            if nums[i] != 0: self.mp[i] = nums[i]
    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec: 'SparseVector') -> int:
        ans = 0
            
        a, b = self.mp, vec.mp
        
        if len(a.keys()) > len(b.keys()):
            a, b = b, a
    
        for key in a.keys():
            if key in b:
                ans += a[key]*b[key]
            
        return ans    
        
        
        
        

# Your SparseVector object will be instantiated and called as such:
# v1 = SparseVector(nums1)
# v2 = SparseVector(nums2)
# ans = v1.dotProduct(v2)