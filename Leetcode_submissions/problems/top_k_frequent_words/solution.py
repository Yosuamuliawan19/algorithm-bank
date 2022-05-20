class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        
        
        
        freq = {}
        
        
        for word in words:
            if word not in freq:
                freq[word] = 1
            else:
                freq[word] += 1
                
        sorted_freq = freq.items()
            
        def my_cmp(x, y):
            if x[1] == y[1]:
               return -1 if x[0] < y[0] else 1
            
            return y[1] - x[1]    
        
        sorted_freq = sorted(list(sorted_freq), key=functools.cmp_to_key(my_cmp))
        
        ans = []
        
        for idx in range(k):
            ans.append(sorted_freq[idx][0])
            
            
        return ans