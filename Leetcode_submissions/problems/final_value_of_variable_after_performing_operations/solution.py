class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        ans = 0
        for cur in operations: 
            if (cur == '--X' or cur == 'X--'):
                ans -= 1
            else:
                ans += 1
        return ans