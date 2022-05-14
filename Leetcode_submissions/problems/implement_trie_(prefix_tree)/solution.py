class Node:
    def __init__(self, v):
        self.val = v
        self.neighbors = {}
        
    def add(self, node):
        if node.val not in self.neighbors:
            self.neighbors[node.val] = node
        return self.neighbors[node.val]
    
    def get(self, c):
        if c not in self.neighbors:
            return None
        return self.neighbors[c]
        

class Trie:
    
    def __init__(self):
        self.root = Node('start')

    def insert(self, word: str) -> None:
        prev = self.root
        for i in word:
            node = Node(i)
            prev = prev.add(node)
        prev.add(Node('end'))

    def search(self, word: str) -> bool:
        prev = self.root  
        for i in word:
            node = prev.get(i)
            if not node:
                return False
        
            prev = node
        return node.get('end') != None
    def startsWith(self, prefix: str) -> bool:
        
        prev = self.root    
        for i in prefix:
            node = prev.get(i)
            if not node:
                return False
        
            prev = node
        return True
        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)