class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        
        
        mp = {}
        
        
        for num in nums:
            
            if num in mp: mp[num] += 1
            else: mp[num] = 1
        
        
        max_len, len = 0, 1
        
        unique = sorted(mp.keys())
        
        vis = set()
        
        for num in unique:
            while True:
                next = num + len
                max_len = max(max_len, len)
                if next in mp and next not in vis:
                    len += 1
                    vis.add(next)
                else:
                    len = 1
                    break
                
        return max_len
                
            
            
            
            
            
        