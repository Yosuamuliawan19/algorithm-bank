# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if not head:
            return None
        
        
        st = []
        n = 0
        
        while head:
            n += 1
            st.append(head)
            head = head.next
            
            
        return st[-1 * int(ceil(n/2))]
        
        
        
        