# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        
        def make_tree(l, r, nums):
            
            if l > r:
                return None 
            if r == l:
                return TreeNode(nums[l])
            elif r == l+1:

                return TreeNode(nums[r], TreeNode(nums[l], None, None), None )
            
            m = l + int((r-l)/2)
            
            left = make_tree(l, m-1, nums)
            right = make_tree(m+1, r, nums)
            
            return TreeNode(nums[m], left, right)
    
        
        return make_tree(0, len(nums)-1, nums)