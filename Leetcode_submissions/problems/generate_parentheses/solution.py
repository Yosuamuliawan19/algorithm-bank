class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        ans = set()

        
        @cache
        def dp(x, l, r):
            if x <= 0:
                ans.add(l+r)
                return
        
            
            dp(x-2, l + '(', ')' + r)
            if (len(r) != 0):
                dp(x, l+r[0], r[1:] )
           
     
            
            
                
        # ((( ))())
        
        
        # (()) ()
        
        # (( ))()
        dp(n*2,'', '')
        
        return sorted(list(ans))
    
    
    