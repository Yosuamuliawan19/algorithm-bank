class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ans = ListNode(0, None)
        ans_head = ans
        cur = 0
        
        while head:
            # check if 0
            if (head.val == 0):
                if (cur != 0):
                    ans.next = ListNode(cur, None)
                    ans = ans.next
                cur = 0
            
            # go to the next node
            cur += head.val
            head = head.next        
        
        return ans_head.next
        
        