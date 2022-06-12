class Trie:
    def __init__(self, val):
        self.val = val
        self.children = {}
        self.words = []
        
class Solution:
    
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        
        
        
        root = Trie('')
        
        for product in products: 
            node = root

            for c in product:
                if c not in node.children:
                    node.children[c] = Trie(c)
                
                node = node.children[c]
                node.words.append(product)
        
        
        ans = []
        flag = True
        node = root
        for c in searchWord:
            if c not in node.children or not flag:
                ans.append([])
                flag = False
            else:
                node = node.children[c]
                node.words.sort()
                if len(node.words) > 3:
                    ans.append(node.words[:3])
                else:
                    ans.append(node.words)
        return ans
                    