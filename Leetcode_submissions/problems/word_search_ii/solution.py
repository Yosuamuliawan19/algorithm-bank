class Node:
    def __init__(self, value):
        self.next = {}
        self.value  = value
        self.word = set()
        
    def add(self, value):
        if not self.hasNext(value): 
            self.next[value] = Node(value)
    
    def get(self, value):
        return self.next[value] 
    
    def hasNext(self, value):
        return (value in self.next)
    
    def empty(self):
        return not self.next
    
    def setWord(self, value):
        self.word.add(value)
        
    def getWord(self):
        return self.word

dirs = [(1,0), (0,1), (-1,0), (0,-1)]
    
class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        
        n, m = len(board), len(board[0])
        root = Node('')
        
        for word in words:
            node = root
            for c in word:
                node.add(c)
                node = node.get(c)
            node.add(-1)
            node.setWord(word)
            
            node = root
            for c in word[::-1]:
                node.add(c)
                node = node.get(c)
            node.add(1)
            node.setWord(word)
        
        def inBoard(x, y): return x >= 0 and x < n and y >= 0 and y < m
        
        vis, ans = set(), set()
        
        @lru_cache(maxsize=None)
        def dfs(i, j, node):    
            if node.hasNext(-1) or node.hasNext(1): ans.update(node.getWord())
            if node.empty(): return       
    
            for dir in dirs:
                x, y = i + dir[0], j + dir[1]
                if inBoard(x,y) and (x, y) not in vis and node.hasNext(board[x][y]):
                    vis.add((x, y))
                    dfs(x, y, node.get(board[x][y]))
                    vis.remove((x, y))
 
        for i in range(n):
            for j in range(m):
                if root.hasNext(board[i][j]):
                    vis.add((i,j))
                    dfs(i, j, root.get(board[i][j]))
                    vis.remove((i,j))
        
        return list(ans)
