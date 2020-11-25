//https://cloud.tencent.com/developer/article/1539037

class Solution
{
public:
    // 牛顿法
    int mySqrt(int x)
    {
        double res = 3;
        int n = 1000; //迭代次数
        for (int i = 0; i < n; i++)
        {
            if (abs(res * res - x) <= 1e-4)
            {
                return int(res);
            }
            res = 0.5 * (res + x / res);
        }
        return int(res);
    }
};