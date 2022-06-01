class Solution:
    def calculate(self, s: str) -> int:
    
        st = []
        n = len(s)
        i = 0
        self.s = s
        
        def readNext(i):
            s = self.s
            isNum = False
            num = 0
            while i < n:
                if s[i] == ' ':
                    i+=1
                    continue 
                if s[i] >= '0' and s[i] <= '9':
                    isNum = True
                    num = (num*10) + int(s[i])
                else:
                    if isNum: return num, i
                    else:
                        sym = s[i]
                        while i+1 < n and s[i+1] == ' ': i+= 1
                        return sym, i+1
                i += 1
            return num, i
        while i < n:
            if s[i] == ' ':
                i+=1
                continue
            symbol, i = readNext(i)
            st.append(symbol)
            if st and st[-1] == '*':
                st.pop()
                a = st.pop()
                b, i = readNext(i)
                st.append(a * b)
            elif st and st[-1] == '/':
                st.pop()
                a = st.pop()
                b, i = readNext(i)  
                st.append(int(a / b))     
        i = len(st)-1
        # print('st', st)
        while i > 0:
            if st and st[i] == '-':
                st[i+1] = -1*st[i+1]
                st[i] = '+'
                # st.pop()
                # l = st.pop()
                # print(l, r)
                # st.append(l-r)
            i -= 1
        # print('st', st)
        i = len(st)-1
        while i > 0:
            if st and st[i] == '+':
                a = st.pop()
                st.pop()
                b = st.pop()
                # print(a,b) 
                st.append(a + b)
            i-=1
        return int(st[0])
        