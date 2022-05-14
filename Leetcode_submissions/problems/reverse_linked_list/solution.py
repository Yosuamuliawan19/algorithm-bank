# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        
        self.head = ListNode()
        self.ptr = self.head
        def dfs(node):
            if not node:
                return 
            if node.next:
                dfs(node.next)

                
            self.head.next = node
            self.head = self.head.next
            self.head.next = None
        
        dfs(head)
        return self.ptr.next