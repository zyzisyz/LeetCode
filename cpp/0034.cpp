class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                int first = i;
                int second = first;
                while (second + 1 < n && nums[second + 1] == target)
                    second++;
                return {first, second};
            }
        }
        return {-1, -1};
    }
};