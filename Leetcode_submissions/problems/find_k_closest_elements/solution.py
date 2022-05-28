class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        
        newArr = []
        for i, num in enumerate(arr):
            newArr.append((abs(x-num),  num))
        
        # (diff, original)
        def myCmp(a, b):
            if a[0] != b[0]:
                return a[0] - b[0]
            return a[1] - b[1]
    
        newArr.sort(key=functools.cmp_to_key(myCmp))        
        ans = [cur[1] for cur in newArr[:k]]

        return sorted(ans)
        
        