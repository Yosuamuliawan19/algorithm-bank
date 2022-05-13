class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        ans = [0 for _ in range(26)]
        for c in magazine:
            ans[ord(c) - ord('a')] += 1
            
        for c in ransomNote:
            ans[ord(c)- ord('a')] -= 1
            if (ans[ord(c)- ord('a')] < 0):
                return False
        return True
            