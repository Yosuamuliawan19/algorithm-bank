class Solution:
    def countVowelPermutation(self, n: int) -> int:
        
        mod = 1e9 + 7
        adj = {
            'a': ['e'],
            'e': ['a', 'i'],
            'i': ['a', 'e', 'o', 'u'],
            'o': ['i', 'u'],
            'u': ['a']
        }
        
        @lru_cache(maxsize=None)
        def dp(cur, idx):
            if idx == n: return 1
            count = 0
            for next in adj[cur]:
                count = (count+dp(next, idx+1)) % mod
            return count % mod
        
        ans = 0
        for start in adj.keys():
            ans = (ans+dp(start, 1))%mod
        
        return int(ans)
            