class Solution:
    def insert(self, inp: List[List[int]], new: List[int]) -> List[List[int]]:
        
        found = False
        ans = []
        n = len(inp)
        i = 0
    
        # add padding 
        inp.append([1e6, 1e6])
        
        
        
        def isOverlap(e1,e2,s1,s2):
            
            
            if (s1 <= e1 and e1 <= s2) or  (s1 <= e2 and e2 <= s2):
                return True
            if (e1 <= s1 and s1 <= e2) or   (e1 <= s2 and s2 <= e2):
                return True
            return False
            
            
        while i != n:
            # if previously has been found
            if found:
                ans.append(inp[i])
                i += 1
                continue

            
            # non overlapping case
            if inp[i][1] < new[0] and inp[i+1][0] > new[1]:
                ans.append(inp[i])
                ans.append(new)
                found = True
                i+= 1
                continue
                
            # overlapping case
            if isOverlap(inp[i][0], inp[i][1], new[0], new[1]):
                start = min(inp[i][0], new[0])
                end = max(inp[i][1], new[1])
                i += 1 
                
                while i != n and end >= inp[i][0]:
                    end = max(end, inp[i][1])
                    i += 1
                
                ans.append([start, end])
                found = True
                continue
            
            # base case
            ans.append(inp[i])
            i += 1 
        
        # print(ans)
        if not found:
            ans.append(new)
            ans.sort()
        return ans
                
                