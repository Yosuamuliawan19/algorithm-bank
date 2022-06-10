# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        
        
        
        
        def split(node, k):
            reachEnd = True
            i = 1
            while i < k:
                if node: node = node.next
                else: reachEnd = False
                i += 1 
            # return none if not until end
            if not node: return None, None, False
            
            newHead = node.next 
            node.next = None # severe the connection
            lastNode = node
            
            return newHead, lastNode, reachEnd # return the start of the next section
        
        def reverse(node):
            prev = None
            current = node
            while(current is not None):
                next = current.next
                current.next = prev
                prev = current
                current = next
            return prev
        
        # def pl(node):
        #     arr = []
        #     while node:
        #         arr.append(node.val)
        #         node = node.next
        #     print(arr)
            
        ans = ListNode()
        ans_ptr = ans
        
        while head: 
            nextSection, lastNode, reachEnd = split(head, k)
            # reverse old head
            
            if not reachEnd:
                ans.next = head
            else:
                ans.next =  reverse(head)
                while ans.next:
                    ans = ans.next
            # pl()
            # ans = lastNode
            
            # place old head to next section
            head = nextSection
            
        return ans_ptr.next