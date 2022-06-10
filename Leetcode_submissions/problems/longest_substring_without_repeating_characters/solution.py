class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        n = len(s)
        st = set()
        ans = 0
        
        l = 0
        for r in range(n):
            c = s[r]
            if c in st:
                while s[l] != c:
                    st.remove(s[l])
                    l += 1
                l += 1
            else:
                st.add(c)
                ans = max(ans, r-l+1)
            
        return ans
                
            
            
            
                