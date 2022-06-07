class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ans = set()        
        cur = [['.' for _ in range(n)] for _ in range(n)]
        
        vis2, vis3, vis4 = [False for _ in range(n)], [False for _ in range((2*n) - 1)], [False for _ in range((2*n) - 1)]
        
        def dp(i):
            # base case if n queens has been placed
            if i == n:
                ans.add(tuple([''.join(elem) for elem in cur]))
                return 
                        
            for j in range(n):
                if vis2[j] or vis3[(i-j)] or vis4[j+i]: continue
                vis2[j] = True
                vis3[(i-j)] = True
                vis4[(j+i)] = True
                cur[i][j] = 'Q'
                dp(i + 1)
                cur[i][j] = '.'
                vis2[j] = False
                vis3[(i-j)] = False
                vis4[(j+i)] = False

        dp(0)
        return list(ans)