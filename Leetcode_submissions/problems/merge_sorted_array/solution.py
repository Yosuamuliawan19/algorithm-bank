class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        
        
        '''
        
        
        [1,2,3,0,0,0], m = 3, 
        [2,5,6]
        
        
        
        
        
        '''
        nums3 = []
        l, r = 0, 0
        
        while l != m or r != n:
            
            if l == m: 
                nums3.append(nums2[r])
                r += 1
            elif r == n:
                nums3.append(nums1[l])
                l += 1
            elif nums1[l] < nums2[r]:
                nums3.append(nums1[l])
                l += 1
            else:
                nums3.append(nums2[r])
                r += 1
            
        
        for i in range(n+m):
            nums1[i] = nums3[i]