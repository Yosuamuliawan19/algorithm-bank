class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        
        
        words.sort()
        
        word_idx = {}
        
        for idx, word in enumerate(words):
            
            word_idx[word] = idx
            
        
        # create connections between words
        
        adjList = defaultdict(list) # idx => list[idx1, idx2]
        
        for i in range(len(words)-1, -1, -1):
            
            word = words[i]
            for j in range(len(words[i])):
                
                next = word[:j] + word[j+1:]
                
                if next in word_idx:
                    adjList[word_idx[next]].append(word_idx[word])
                    # print(word , next)
        
        # print(adjList)
        
        
        vis = set()
        
        def dfs(node):
            vis.add(node)
            res = 1            
            for next in adjList[node]:
                if next not in vis:
                    res = max(res, dfs(next) + 1) 
            return res
        
        ans = 0
        for i in range(len(words)):
            vis = set()
            ans = max(ans, dfs(i))
            # print(i, dfs(i))
        return ans
        
                    
        
        
        
         
        