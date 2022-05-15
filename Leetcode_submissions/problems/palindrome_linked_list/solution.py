# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        
        self.head2 = head
        self.ans = True
        def dfs(node):
            if not node and not self.ans:
                return 
            
            if node.next:
                dfs(node.next)
            
            if self.head2.val != node.val:
                self.ans = False
                return
            
            self.head2 = self.head2.next
        
        dfs(head)
        
        return self.ans
        