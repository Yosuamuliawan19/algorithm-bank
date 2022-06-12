# """
# This is ArrayReader's API interface.
# You should not implement it, or speculate about its implementation
# """
#class ArrayReader:
#    def get(self, index: int) -> int:

class Solution:
    def search(self, reader: 'ArrayReader', target: int) -> int:
        
        
        
        out = 2**31 - 1
        
        
        
        l, r = 0, 1e4
        
        while r >= l:
            m = l + int((r-l)/2)
            
            val = reader.get(m)
            
            if val == target:
                return m
            
            elif val == out or val > target:
                r = m-1
            else:
                l = m+1
                
        return -1
                
        
        