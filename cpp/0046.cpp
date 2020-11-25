class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<bool> used;
    vector<int> nums;
    int n;

    void dfs(int cnt)
    {
        if (cnt == n)
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (used[i] == false)
            {
                path.push_back(nums[i]);
                used[i] = true;
                dfs(cnt + 1);
                used[i] = false;
                path.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int> &_nums)
    {
        nums = _nums;
        n = nums.size();
        used.assign(n, false);
        dfs(0);
        return res;
    }
};