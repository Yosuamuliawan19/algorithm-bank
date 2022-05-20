class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        
        
        n = len(candidates)
        
        candidates.sort()
        
        ans = set()
        
        @lru_cache(maxsize=None)
        def uniqueCombo(t, combi):
            if t == 0:
                combi = sorted(list(combi))
                ans.add(tuple(combi))
                return 

            for i in range(n):                
                if candidates[i] > t:
                    break
                    
                arr = uniqueCombo(t - candidates[i], combi + tuple([candidates[i]]))
            
        uniqueCombo(target, ())
        
        return ans