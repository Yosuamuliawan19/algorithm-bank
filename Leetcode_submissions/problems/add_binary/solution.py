class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        def toInt(x):
            ans, mul = 0, 1
            for i in range(len(x)-1, -1, -1):
                if (x[i] == '1'):
                    ans += mul
                mul *= 2
            return ans
        
        
        c = toInt(a) + toInt(b)
        if (c == 0):
            return '0'
        ans = ''
        while c != 0:
            if (c & 1 == 1):
                ans = '1' + ans
            else:
                ans = '0' + ans
            c = c >> 1
        return ans
#         carry = 0
#         idx = 1
#         ans = ''
#         while (idx <= len(a) and idx <= len(b)):
#             x = ord(a[-idx])-48
#             y = ord(b[-idx])-48
#             idx+=1
#             if (x == 1 and y == 1):
#                 if (carry == 1):
#                     ans = "10"+ ans
#                     carry = 0
#                 else: 
#                     ans = "0" + ans
#                     carry = 1
#             else:
#                 ans = '1' + ans
        
#         print('stage 1' ,ans)
#         # get leftover
#         leftover = b
#         if len(a) > len(b):
#             leftover = a
            
#         # exhaust carry
#         if (carry != 0):
#             if (idx <= len(a)):
                
#                 while (carry != 0):
#                     x = ord(a[-idx])-48
#                     idx += 1
#                     if (x == 1):
#                         if (carry == 1):
#                             ans = "10"+ ans
#                             carry = 0
#                         else:
#                             ans = '1' + ans
#                             carry = 0
#                     else:
#                         carry = 0
                
#             else:
#                 ans = '1' + ans
#         print('stage 2' ,ans)
#         # put leftover back
#         if idx <= len(leftover):
#             ans = leftover[-idx] + ans
#         print('stage 3' ,ans)
#         # remove leading 0
#         start = 0
#         while start < len(ans) and ans[start] == '0' :
#             start += 1
#         return ans[start:]
    
        
# #         2 = 11
# #         1 = 1
        
# #         0, prev = 0, carry 1, 0
        
        
        
        
# #             3 = 11
# #             3 = 11
            
            
# #             0, prev = 0, carry 1
# #             0, prev = 1, carry 1
            
            
            
# #             6 = 1010
            
            
            
# #             13 = 1111
# #             13 = 1111
            
            
# #             0, prev = 0, carry 1, 0
# #             0, prev = 1, carry 1, 01,0
# #             0, prev = 0, carry 1, 1,01,0
# #             0, prev = 1, carry 1, 01,1,01,0
            
            
            
# #             26 = 11010
        