class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        
        indegree = {}
        adj = {}
        
        for i in range(numCourses): 
            indegree[i] = 0
            adj[i] = set()
        
        for pre in prerequisites: 
            indegree[pre[0]] += 1
            adj[pre[1]].add(pre[0])
                 
        q = []
        for i in range(numCourses):
            if indegree[i] == 0: q.append(i)   
            
        ans = []
        while len(q) != 0:
            cur = q.pop()
            ans.append(cur)
            for next in list(adj[cur]):
                indegree[next] -= 1
                if indegree[next] <= 0: 
                    q.append(next)
        
        if len(ans) != numCourses:
            return []
        return ans
                                    
            
            
                
            
        
        
        