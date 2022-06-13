class Solution:
    def longestSubsequence(self, arr: List[int], difference: int) -> int:
        
        mp = defaultdict(list) 
        n = len(arr)
        
        for i in range(n):
            mp[arr[i]].append(i)
        
        @cache
        def dp(idx):
            
            res = 1
            for next in mp[arr[idx]+difference]:
                if next > idx:
                    res = max(res, dp(next) + 1)
        
            return res
        
        
        ans = 1
        for i in range(n):
            ans = max(ans, dp(i))
        
        return ans