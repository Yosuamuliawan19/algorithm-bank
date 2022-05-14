class Solution:
    def canFinish(self, n: int, pre: List[List[int]]) -> bool:
        
        self.adj, is_pre = [[] for _ in range(n)],  [False for _ in range(n)]
        for i, j in pre:
            if (i == j):
                return False
            self.adj[i].append(j)
            is_pre[j] = True
        
        
        def detectCycles(node):
            if node == self.ori:
                # print('cycle')
                self.cycle = True
                
            if self.cycle or node in self.vis :
                return 
            
            self.vis.add(node)
            for next in self.adj[node]:
                detectCycles(next)
    
        cnt_is_pre = 0
        for i in range(len(is_pre)):
            if  is_pre[i]: 
               cnt_is_pre += 1
        if cnt_is_pre == n:
            return False
        # print(is_pre)
        for i in range(len(is_pre)):
            # print('start in ', i)
            self.vis = set([i])
            self.cycle = False
            self.ori = i

            for next in self.adj[i]:
                detectCycles(next)

            if self.cycle:
                return False
        return True