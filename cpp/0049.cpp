class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> res;
        map<string, vector<string>> table;

        for (auto str : strs)
        {
            string key = str;
            sort(key.begin(), key.end());
            table[key].push_back(str);
        }
        for (auto it : table)
        {
            res.push_back(it.second);
        }
        return res;
    }
};