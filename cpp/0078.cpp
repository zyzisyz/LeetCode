class Solution
{
public:
    vector<int> path;
    vector<vector<int>> res;
    vector<bool> used;
    vector<int> nums;
    int n;
    void dfs(int index)
    {
        if (index == n)
        {
            return;
        }
        res.push_back(path);
        for (int i = index; i < n; i++)
        {
            if (used[i] == false)
            {
                used[i] = true;
                path.push_back(nums[i]);
                dfs(i);
                path.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<int>> subsets(vector<int> &_nums)
    {
        nums = _nums;
        n = nums.size();
        used.assign(n, false);
        dfs(0);
        return res;
    }
};