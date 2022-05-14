class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        st = set()
        l, r, n = 0, 0, len(s)
        ans = 0
        
        while r != n:
            c = s[r]
            if c in st:
                while s[l] != c:
                    if s[l] in st:
                        st.discard(s[l])
                    l+=1
                l+=1
            else:
                st.add(c)
            
            # print(l,r)
            ans = max(ans, 1+r-l)
            r += 1
        return ans
                
                
            
            
            
                