# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        
        
        
        # get the number
        end = head
        if not end:
            return None
        
        n = 1
        while end.next:
            n += 1
            end = end.next        
        k = k % n
        k = n - k        
        # print(k, n, end.val)
        
        

        # dfs
        self.head = head
        def dfs(node, cnt):
            if cnt == k:          
                # print(node.val, cnt)
                end.next = self.head
                self.head = node.next
                node.next = None
                return 
            
            dfs(node.next, cnt+1)
        dfs(head, 1)
        
        return self.head
            
        
        
        
        