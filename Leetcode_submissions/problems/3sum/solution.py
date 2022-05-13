class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n, p = [],[]
        N, P, Z = set(), set(), 0
        ans = set()
        for i in nums:
            if i == 0:
                Z += 1
            elif i > 0:
                p.append(i)
                P.add(i)
            else:
                n.append(i)
                N.add(i)
        
        if Z >= 1:
            for i in P:
                if -1 * i in N:
                    ans.add((-1*i, 0, i))
        
        if Z >= 3:
            ans.add((0,0,0))
        for i in range(len(n)):
            for j in range(i+1, len(n)):
                target = -1*(n[i]+n[j])
                if target in P:
                    ans.add(tuple(sorted([n[i], n[j], target])))
        
        for i in range(len(p)):
            for j in range(i+1, len(p)):
                target = -1*(p[i]+p[j])
                if target in N:
                    ans.add(tuple(sorted([p[i], p[j], target])))
        
        
        
        
        return list(ans)
                
                    
            
            
                
        
        