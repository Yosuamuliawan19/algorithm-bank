# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        
        carry = 0
        
        ans = ListNode()
        ans_head = ans
        while l1 or l2:
            val = carry
            if l1: 
                val += l1.val
                l1 = l1.next
            if l2: 
                val += l2.val
                l2 = l2.next
            # 
            carry = 0
            if val >= 10:
                carry = int(val/10)
                val = val-10
            #1
            ans.next = ListNode(val)
            ans = ans.next
        if carry:
            ans.next = ListNode(carry)
            
            
        
        return ans_head.next
        
        