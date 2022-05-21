# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        
        def myCmp(x, y):
            return x[0] - y[0]
            
        heads = []
        for list in lists:
            if not list: continue
            heads.append(list)
        
        if len(heads) == 0:
            return None
        # print(heads)
        # return None
        
        n, finished = len(heads), 0
        answer = ListNode(0, None)
        answerHead = answer
        currentList = []
        
        while finished != n:

            for i in range(n):    
                if not heads[i]: continue
                currentList.append((heads[i].val, heads[i]))
                if heads[i].next == None:
                    heads[i] = None
                    finished += 1
                else:
                    heads[i] = heads[i].next
            
        currentList.sort(key=functools.cmp_to_key(myCmp))
        for node in currentList:
            answer.next = node[1]
            answer = answer.next
        # print(currentList)
            
        return answerHead.next
            
            
            
                
            
            
            
        
        
        
        
        