# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:
        adjList = {}
        def insertAdjList(a,b):
            if a.val in adjList: adjList[a.val].append(b.val)
            else: adjList[a.val] = [b.val]
            
            if b.val in adjList: adjList[b.val].append(a.val)
            else: adjList[b.val] = [a.val]
            
        def makeAdjList(node):
            if node.left:
                insertAdjList(node, node.left)
                makeAdjList(node.left)
            if node.right:
                insertAdjList(node, node.right)
                makeAdjList(node.right)    
        
        makeAdjList(root)
        
        # generate ans
        ans = []
        vis = set()
        
        def dfs(node, cnt):
            if cnt == 0:
                ans.append(node)
                return
            if node not in adjList or len(adjList[node]) == 0: return 
            for next in adjList[node]:
                if next not in vis:
                    vis.add(next)
                    dfs(next, cnt - 1)
        
        vis.add(target.val)
        dfs(target.val, k)
        
        return ans
        
        
        