class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        
        for i in range(len(s)):
            if len(st) == 0:
                st.append(s[i])
                continue
            if st[-1] == '{' and s[i] == '}':
                st.pop()
            elif st[-1] == '[' and s[i] == ']':
                st.pop()
            elif st[-1] == '(' and s[i] == ')':
                st.pop()
            else:
                st.append(s[i])
          
        return len(st) == 0