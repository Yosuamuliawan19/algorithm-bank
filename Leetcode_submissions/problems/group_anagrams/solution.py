class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        
        ansMap = {}
        
        
        for currentString in strs:
        
            sortedCurrentString = "".join(sorted(currentString))
            
            if sortedCurrentString in ansMap:
                ansMap[sortedCurrentString].append(currentString)
            else:
                ansMap[sortedCurrentString] = [currentString]
                
                
        ans = [cur for cur in ansMap.values()]
        
        
        return ans
        
       
        
            
            
        
        
        