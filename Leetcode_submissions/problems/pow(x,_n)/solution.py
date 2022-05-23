class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0: return 1
        if n == 1: return x
        if n == -1: return 1/x
        if n % 2 == 0:
            res = self.myPow(x, n/2)
            return res * res
        res = self.myPow(x, int(n/2))
        return res * res * (x if n >= 1 else 1/x)
        