class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        
        st = set()
        
        
        n = len(s)
        
        for i in range(n-k+1):
            # print(s[i: i+k])
            st.add(s[i: i+k])
            
        if len(st) < 2**k:
            
            return False
        
        return True
            