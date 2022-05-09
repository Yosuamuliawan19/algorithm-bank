class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        
        
        ans = 0
        for x in sentences:
            cnt = 0
            for y in x:
                if (y == ' '):
                    cnt += 1
            ans = max(ans, cnt+1)
        return ans