class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1] for _ in range(numRows)]
        for i in range(1, numRows):
            for j in range(1, i):
                res[i].append(res[i-1][j]+res[i-1][j-1])
            res[i].append(1)
        return res
