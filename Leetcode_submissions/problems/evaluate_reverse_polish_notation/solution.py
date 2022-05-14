class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        
        
        def isOperator(x):
            if x == '+' or x == '-' or x == '*' or x == '/':
                return True
            return False
        for t in tokens:
            if (isOperator(t)):
                b, a, c = st.pop(), st.pop(), 0
                
                if t == '+':
                    c = a + b
                elif t == '-':
                    c = a - b
                elif t == '/':
                    c = int(a / b)
                else:
                    c = a * b
                st.append(c)
                
            else:
                st.append(int(t))
        return st[-1]