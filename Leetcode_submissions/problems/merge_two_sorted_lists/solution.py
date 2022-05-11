# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        ans = ListNode(0, None);
        head = ans;
        while (list1 != None and list2 != None):
            if (list1.val < list2.val):
                cur = ListNode(list1.val, None)
                head.next = cur
                list1 = list1.next
            else:
                cur = ListNode(list2.val, None)
                head.next = cur
                list2 = list2.next
            
            head = head.next
                
        while (list1 != None):
            cur = ListNode(list1.val, None)
            head.next = cur
            list1 = list1.next
            head = head.next
            
        while (list2 != None):
            cur = ListNode(list2.val, None)
            head.next = cur
            list2 = list2.next
            head = head.next
            
        return ans.next
                
        
                
            
            
        
        