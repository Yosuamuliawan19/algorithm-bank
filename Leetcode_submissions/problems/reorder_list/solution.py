# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        
        
        
        
        '''
        1, 2, 3
        
        4, 5
        
  
        
        
        '''          
        # generate left and right

        list1 = head
        list2 = head

        n = 0
        while list2:
            list2 = list2.next
            n += 1

        list2 = head
        m = int((n+1)/2)
       
        for i in range(m):
            list2 = list2.next
        
       
        # print('---')
        # print('l1,l2', list1.val, list2.val)
        # print('n,m',n,m)
        # dfs
        self.right = list2
        def dfs(left,  d):
            
            if left == None or d > m:
                # print('reached end')
                return None
            rest = dfs(left.next,  d+1)
            
            if not self.right:
                left.next = rest
                return left
            
            a = self.right
            b = left
            self.right = self.right.next
            
            # print(a.val, b.val)
            if n % 2 == 1:
                a.next = b
                b.next = rest
                return a
            
            b.next = a
            a.next = rest
            return b
            

        return dfs(list1,  1)
        
        '''
        1,2 
        3,4
        
        
        1,2,3
        4,5
        
        
        '''
        