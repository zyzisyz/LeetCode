class Solution
{
public:
    int minCount(vector<int> &coins)
    {
        int dp[12];
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i < 12; i++)
        {
            dp[i] = min(dp[i - 1] + 1, dp[i - 2] + 1);
        }
        int res = 0;
        for (auto it : coins)
        {
            res += dp[it];
        }
        return res;
    }
};