# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        newHead = ListNode(0, head)
        
        def dfs(prev, node):
            if node.next == None:
                if n == 1:
                    prev.next = None
                return 1

            cur = 1 + dfs(node, node.next)
            if cur == n:
                prev.next = node.next
                
            return cur
        
        cur = dfs(newHead, head)
            
        return newHead.next
        
        