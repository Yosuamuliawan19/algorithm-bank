class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        
        n = len(l)
        ans = []
        for i in range(n):
            if (l[i] == r[i]):
                ans.append(True)
                continue
            
            st = set(nums[l[i]:r[i]+1])
            mn, mx = min(nums[l[i]:r[i]+1]), max(nums[l[i]:r[i]+1]) 
            interval, q = divmod(mx - mn,r[i]-l[i])
            if (mx == mn):
                ans.append(True)
                continue
            if (q != 0):
                ans.append(False)
                continue
    
            
            flag = 1
            for j in range(mn, mx+1, interval):
                if (j not in st):
                    flag = 0
                    break

            ans.append(True if flag == 1 else False)
        return ans
                
            