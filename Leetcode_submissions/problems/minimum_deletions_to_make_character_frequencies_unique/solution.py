class Solution:
    def minDeletions(self, s: str) -> int:
        
        # generate counts
        cnt, mx, ans = [0 for _ in range(26)], 0, 0
        for c in s:
            cnt[ord(c)-97] += 1
            mx = max(mx, cnt[ord(c)-97])
        
        
        # gather all the cnts and sort
        cnts = []
        for i in range(26):
            if cnt[i] != 0:
                cnts.append(cnt[i])
                
        cnts.sort()
    
    
    
        used = set()
        ans = 0
        for cur in cnts:
            temp = cur
            # print(cur)
            while cur in used:
                if (cur == 0):
                    break
                # print(f'{cur} is used')
                cur -= 1
                ans += 1
            used.add(cur)
            used.add(temp)
            
            
        # 4, 4, 3, 2 = ans = 3
        
        
        
        
#         print(freq)
        
#         mn = keys[0]+1
#         for i in keys:
#             print('Current', i, ', freq: ', freq[i], ', mn', mn)
#             # count how many need to move back
#             n = freq[i] - 1 
#             if (mn <= i): 
#                 n = (i-mn) + freq[i]
#             print('substracting', n)
            
            
#             # count total. steps need to take 
#             minus = n * (n + 1) / 2
            
#             # special case 
#             if n > i:
                
#                 newN = min(n, i)
#                 minus = 
            
            
#             print('minus', minus)
#             ans += int(minus)
#             mn = min(mn, i - n)
        
        
        
#             2 has 4
#             2, 1, 0, 0
#                1  
        return ans 
        
        
            