class Solution:
    def mySqrt(self, x: int) -> int:
        res = x/2
        if x == 0 or x == 1:
            return x
        for i in range(1000):
            if abs(res*res-x<1e-4):
                return int(res)
            res = 0.5*(res + x/res)
        return res
