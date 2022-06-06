class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        
        
        
        arr = []
        for str in strs: 
            a, b = 0, 0 
            for c in str: 
                if c == '0': a += 1
                else: b += 1
            arr.append((a, b))

        
        
        @cache
        def dp(i, cnt_1, cnt_2):
            
            if i == len(arr): return 0
            
            ans = dp(i + 1, cnt_1, cnt_2)
        
            if cnt_1 + arr[i][0] <= m and cnt_2 + arr[i][1] <= n:
                ans = max(ans, 1 +  dp(i + 1, cnt_1 + arr[i][0], cnt_2 + arr[i][1]))
            
            return ans 
                
                
        return dp(0, 0, 0)
        
        