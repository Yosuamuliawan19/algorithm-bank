class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        
        mp = {}
        wordList.append(beginWord)
        endInGraph = False
        
        for word in wordList:
            if word == endWord:
                endInGraph = True
            replaced = '#' + word[1:]
            
            if replaced in mp: mp[replaced].add(word)
            else: mp[replaced] = set([word])    
            
            for i in range(1, len(word)):
                replaced = word[:i] + '#' + word[i+1: ]
                if replaced in mp: mp[replaced].add(word)
                else: mp[replaced] = set([word])    
        
        if not endInGraph:
            return 0
        
        adjList = {}
        intersections = mp.values()
        
        for i, intersection in enumerate(intersections):
            if len(intersection) == 1: continue
            intersection = list(intersection)
                
            for j in range(len(intersection)):
                for k in range(len(intersection)):
                    if j == k: continue
                    src, dst = intersection[j], intersection[k]
                    
                    if src in adjList: adjList[src].add(dst)
                    else: adjList[src] = set([dst])
                        
                    if dst in adjList: adjList[dst].add(src)
                    else: adjList[dst] = set([src])
        
        # print(adjList)
        def bfs(adjList, start, end):
            q = [(start, 1)]
            vis = set()
            
            while len(q) != 0:
                current, distance = q.pop(0)
                # print(current, distance)
                if current == end:
                    return distance
                
                
                vis.add(current)
                if current not in adjList:
                    continue
                for next in adjList[current]:
                    if next not in vis:
                        q.append((next, distance+1))
            
            return 0
            
        return bfs(adjList, beginWord, endWord)
            