class Solution:
    def findReplaceString(self, s: str, indices: List[int], sources: List[str], targets: List[str]) -> str:
        
        
        ans = ''
        
        idx = 0
        cur_idx = 0
        n = len(s)
        m = len(indices)
        
        
        #
        rep = []
        for i in range(m):
            rep.append((indices[i], sources[i], targets[i]))
        rep.sort()
        
    
    
        while idx != n:
            if cur_idx != len(indices) and idx == rep[cur_idx][0]:
                shouldReplace = True
                # check if substring is the same
                for i in range(len(rep[cur_idx][1])):
                    if s[idx+i] != rep[cur_idx][1][i]:
                        shouldReplace = False
                        break
                
                # append to ans
                if shouldReplace:
                    ans += rep[cur_idx][2]
                else:
                    ans += s[idx: idx+len(rep[cur_idx][1])]
                idx += len(rep[cur_idx][1])
                # print('new ans', ans, shouldReplace )
                # increment the check
                cur_idx += 1
            else:    
                ans += s[idx]
                idx += 1
            
        return ans