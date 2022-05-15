class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        neg, pos = [], []
        
        for num in nums:
            if num < 0:
                neg.append(num*num)
            else:
                pos.append(num*num)

        ans = []
        
        i, j = len(neg) - 1, 0 
        while i != -1 and j != len(pos):
            if neg[i] > pos[j]:
                ans.append(pos[j])
                j +=1
            else:
                ans.append(neg[i])
                i -= 1
                
        while i >= 0:
            ans.append(neg[i])
            i-=1
        while j < len(pos):
            ans.append(pos[j])
            j+=1
    
        return ans