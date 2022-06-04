class Solution:
    def frequencySort(self, s: str) -> str:

        mp = defaultdict(int)
        
        for c in s:
            mp[c] += 1
            
        ans = ""
        
        arr = []
        
        for c in mp.keys():
            arr.append((mp[c], c))
            
        arr = reversed(sorted(arr))
        
        for cur in arr:
            ans += (cur[1] * cur[0])
            
        return ans