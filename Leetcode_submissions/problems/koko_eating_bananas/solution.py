class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        # piles, h, k
        
        piles.sort()
        l, r = 1, piles[-1]
    
        while (r >= l):
            m = l + int((r-l)/2)
            cur = sum([ceil(i/m) for i in piles])
            if cur > h:
                l = m + 1
            else:
                r = m - 1
        return l