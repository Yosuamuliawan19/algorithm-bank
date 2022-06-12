# """
# This is Master's API interface.
# You should not implement it, or speculate about its implementation
# """
# class Master:
#     def guess(self, word: str) -> int:

class Solution:
    def findSecretWord(self, wordlist: List[str], master: 'Master') -> None:
        '''
        
        acckzz
        
        
        
        abcczz = 4
        acckzz = 6
        ccbazz = 3
        eiowzz = 2
        
        
        guess first letter
        a, c, e
        
        Heuristics -> the closer lexicographicall, the more likely it has more common words
        
        res = word(a)
        
        impossible is words that doesnt have enough matches with a
        
        
        '''
        
        wordlist.sort()
        def numMatches(a, b): # O(1)
            res = 0
            for i in range(6):
                if a[i] == b[i]:
                    res += 1
            return res
        
        nextWordList = wordlist
        while len(nextWordList) != 0: # O(100)
            
            idx = random.randint(0, len(nextWordList)-1)
            current = nextWordList[idx]
            matches = master.guess(current)
            
            tmp = []
            for i in range(len(nextWordList)):  # O(100)
                if i!=idx and numMatches(current, nextWordList[i]) == matches:
                    tmp.append(nextWordList[i])
            nextWordList = tmp
        
        