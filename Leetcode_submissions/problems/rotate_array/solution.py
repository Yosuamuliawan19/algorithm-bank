class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        
        
        
        n = len(nums)
        k = k%n
        
        
#         vis = set()
#         def dfs(idx, value, k):
#             vis.add(idx)
#             temp = nums[idx]
#             nums[idx] = value
#             next_idx = (idx+k)%n
#             if next_idx not in vis:
#                 dfs(next_idx, temp, k)
#             else:
#                 nums[next_idx] = temp
    
#         n = even, k = even # 0,1,2,3, will reach the same place
#         n = even, k = odd # 0,1,2,3, will exhaust all
#         n = odd, k = even # 0,1,2,3,4  will exhaust all
#         n = odd, k = odd # 0,1,2,3,4 will exhaust all

        jump_amount = 0
        def bfs(idx, value, k):      
            nonlocal  jump_amount
            
            next_idx = (idx+k)%n
            carry_value = nums[idx]
            nums[idx] = float('inf')
            jump_amount += 1
            
            while nums[next_idx] != float('inf'): # while not reach the same node
                jump_amount += 1
                tmp, nums[next_idx] = nums[next_idx], carry_value
                carry_value = tmp # change carry value to the current idx
                next_idx = (next_idx+k)%n
                
            nums[next_idx] = carry_value # if reach same node, place the last carry value
        for i in range(n-k):
            if jump_amount == n: break
            bfs(i, nums[i], k)
                
        return nums