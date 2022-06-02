class Node:
    
    
    def __init__(self, val):
        self.val = val
        self.next = {}
        self.nextCnt = 0 
        
    def add(self, val):
        if not self.hasNext(val): 
            self.next[val] = Node(val)
            self.nextCnt += 1
    
    def hasNext(self, val):
        return val in self.next
    
    def get(self, val):
        if val in self.next:
            return self.next[val]
        return -1


    
class WordDictionary:

    def __init__(self):
        self.trie = Node('')

    def addWord(self, word: str) -> None:
        node = self.trie
        for c in word:
            node.add(c)
            node = node.get(c)
        node.add(-1)
        
    def search(self, word: str) -> bool:
        n = len(word)
        self.n = n
        self.word = word
        if word[0] == '.':
            for next in self.trie.next.values():
                if self.dfs(0, next):  return True
            return False
        else:
            if not self.trie.hasNext(word[0]): return False
            return self.dfs(0, self.trie.get(word[0]))
    
    def dfs(self, i, node):
        if i == self.n-1: return node.hasNext(-1)
        
        if self.word[i+1] == '.':
            for next in node.next.values():
                if self.dfs(i+1, next): return True
        elif self.word[i+1] not in node.next:
            return False
        else:
            return self.dfs(i+1, node.get(self.word[i+1]))
# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)