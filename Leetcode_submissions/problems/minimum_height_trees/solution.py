class Solution:
    def findMinHeightTrees(self, n: int, edges: List[List[int]]) -> List[int]:
        
        
        
        # dfs 3 times
        # find edge a
        # find edge b
        # find the equivalents of edge a
        
        
        adj = {}
        for edge in edges:
            if edge[0] in adj: adj[edge[0]].append(edge[1])
            else: adj[edge[0]] = [edge[1]]
                
            if edge[1] in adj: adj[edge[1]].append(edge[0])
            else: adj[edge[1]] = [edge[0]]
                   
        ans = set()
        
        def dfs(node, distance, far, far_dis, vis):
            if distance > far_dis[0]:
                far_dis[0] = distance
                far[0] = node
            vis.add(node)
            if node not in adj: return 
            for next in adj[node]:
                if next not in vis:
                    dfs(next, distance+1, far, far_dis, vis)

        start = 0
        
        far_1, far_1_dis = [start], [0]
        dfs(start, 0, far_1, far_1_dis, set())
        
        far_2, far_2_dis = far_1.copy(), [0]
        dfs(far_2[0], 0, far_2, far_2_dis, set())
        
        max_dis = far_2_dis[0] + 1
        far_1, far_2 = far_1[0], far_2[0]
        path = []
    
        # print(far_1, far_2, max_dis, )

        def dfs2(node, distance, vis):
            path.append(node)
            vis.add(node)
            if distance == max_dis:
                ans.add(path[int(distance/2)])
                if distance % 2 == 0: ans.add(path[int(distance/2)-1])
            if node not in adj: return 
            for next in adj[node]:
                if next not in vis:
                    dfs2(next, distance+1, vis)
        
        dfs2(far_1, 1, set())
    
        return list(ans)
        