class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        
        mp = {
                '1': [],
                '2': ['a','b','c'], '3': ['d','e','f'], '4': ['g','h','i'], '5': ['j','k', 'l'],
                '6': ['m','n','o'], '7': ['p','q','r', 's'], '8': ['t','u','v'], '9': ['w','x', 'y', 'z'],
                '0': [' ']
              }
        
        prevAns = []
        n = len(digits)
        
        for i in range(n):
            
            newAns = []
            m = len(prevAns)
            
            for j in range(len(mp[digits[i]])):
                if m == 0:
                    newAns.append(mp[digits[i]][j])
                for k in range(m):        
                    newAns.append(prevAns[k] + mp[digits[i]][j])

            prevAns = newAns
            
        return prevAns
        