class Solution
{
public:
    string addBinary(string a, string b)
    {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int lena = a.size();
        int lenb = b.size();
        int length = max(lena, lenb);

        string res = "";
        int carry = 0;
        for (int i = 0; i < length; i++)
        {
            int current = carry;
            carry = 0;
            if (i < lena && a[i] == '1')
                current += 1;
            if (i < lenb && b[i] == '1')
                current += 1;
            if (current > 1)
            {
                current = current % 2;
                carry = 1;
            }
            res = res + char('0' + current);
        }
        if (carry)
            res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};