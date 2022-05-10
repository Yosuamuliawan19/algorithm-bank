# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        start, idx = list1, 0
        left, right = list1, list1
        while (idx != b+1):
            # print(start.val)
            if (idx == a-1):
                left = start
            if (idx == b):
                right = start.next
            idx += 1
            start = start.next
        left.next = list2
        while (list2.next):
            list2 = list2.next
        list2.next = right
        return list1
            
        
        
        
        