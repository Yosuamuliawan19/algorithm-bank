class Solution:
    def platesBetweenCandles(self, s: str, queries: List[List[int]]) -> List[int]:
        
        
        lastCandle = -1
        arr1 = []
        pre = []
        curSum = 0
        for i, c in enumerate(s):
            if c == '|':
                lastCandle = i
            else: curSum += 1
            pre.append(curSum)
            arr1.append(lastCandle)    
            
        lastCandle = -1
        arr2 = [0 for _ in range(len(s))]
        for i in range(len(s)-1,-1,-1):
            if s[i] == '|':
                lastCandle = i
            arr2[i] = lastCandle
            
        ansArr = []
        
        for a, b in queries:
            
            l, r = arr2[a], arr1[b]
            if l == r or l >= b or r <= a:
                ansArr.append(0)
                continue
            res = pre[r] - (pre[l-1] if l != 0 else 0)
            ansArr.append(res) 
            
            
            
            
            
        
        
        return ansArr