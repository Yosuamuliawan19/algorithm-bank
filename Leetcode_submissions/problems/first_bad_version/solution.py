# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        
        l, r = 1, n
        while (r >= l):
            m = l + int((r-l)/2)
            if (isBadVersion(m)):
                r = m-1
            else:
                l = m+1
        return l