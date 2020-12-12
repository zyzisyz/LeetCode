class Solution
{
public:
    double solver(double x, long long n)
    {
        double cnt = x;
        double res = 1;
        while (n > 0)
        {
            if (n % 2)
            {
                res = res * cnt;
            }
            n = n / 2;
            cnt = cnt * cnt;
        }
        return res;
    }
    double myPow(double x, int n)
    {
        if (n == 0 || x == 1)
            return 1;
        long long tmp = n;
        if (n > 0)
            return solver(x, tmp);
        else
            return 1.0 / solver(x, -tmp);
    }
};