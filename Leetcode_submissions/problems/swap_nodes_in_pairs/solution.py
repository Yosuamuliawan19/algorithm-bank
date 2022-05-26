# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
            
        
        
        
        self.ans = TreeNode()
        
        ans_head = self.ans
        
        
        def trav(node):
            
            if not node: return 

            a = node
            b = node.next
            c = node.next.next if node.next else None
            
            if a: a.next = None
            if b: b.next = None
            
            if b:
                self.ans.next = b
                self.ans = self.ans.next
            if a:
                self.ans.next = a 
                self.ans = self.ans.next
            
            if b: trav(c)
            
        trav(head)
        return ans_head.next if head else None
        
        