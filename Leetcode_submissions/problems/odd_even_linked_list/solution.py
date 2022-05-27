# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        
        odd = TreeNode()
        even = TreeNode()
        
        odd_ptr = odd
        even_ptr = even
        
        pointer = head
        
        flag = True
        while head:
            
            if flag:
                odd.next = head
                odd = odd.next
            else:
                even.next = head
                even = even.next
            
            head = head.next
            flag = not flag
            
        odd.next = None
        even.next = None
        
        odd_ptr = odd_ptr.next
        even_ptr = even_ptr.next
        
#         print(odd_ptr)
#         print(even_ptr)
        
        if not odd_ptr: return even_ptr
    
        odd.next = even_ptr
            
        return odd_ptr