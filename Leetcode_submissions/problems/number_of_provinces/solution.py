class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        
        
        
        n = len(isConnected)
        ans = 0
        visited = set()
        
        def dfs(node):
            visited.add(node)
            for next in range(n):
                if isConnected[node][next] and next not in visited and next != node:
                    dfs(next)
        
        for i in range(n):
            if i not in visited:
                dfs(i)
                ans += 1
        return ans
            
            