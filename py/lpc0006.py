class Solution:
    def minCount(self, coins: List[int]) -> int:
        dp = [0 for _ in range(12)]
        dp[1] = 1
        dp[2] = 1
        for i in range(3, 12):
            dp[i] = min(dp[i-1]+1, dp[i-2]+1)
        res = 0
        for it in coins:
            res += dp[it]
        return res
