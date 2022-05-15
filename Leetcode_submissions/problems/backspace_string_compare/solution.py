class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        
        
        
        
        st1, st2 = [], []
        
        for c in s:
            if c == '#' and len(st1) != 0:
                st1.pop()
            
            if c != '#':
                st1.append(c)
        
        
        for c in t:
            if c == '#' and len(st2) != 0:
                st2.pop()
            
            if c != '#':
                st2.append(c)
        

        return ''.join(st1) == ''.join(st2)
        
        