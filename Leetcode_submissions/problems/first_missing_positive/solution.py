class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        
        

        st = set()
        
        for n in nums: st.add(n)
            
        i = 1
        while True:
            if i not in st:
                return i
            i += 1
            
        return -1
            
        
        
        
        
        
        
        
        
        
        