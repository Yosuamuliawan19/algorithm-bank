class Solution:
    def tribonacci(self, n: int) -> int:
        f = [0, 1, 1]
        if (n == 0 or n == 1 or n == 2):
            return f[n]
        for i in range(3, n+1):
            f.append(f[i-1] + f[i-2] + f[i-3])
        return f[-1]
        