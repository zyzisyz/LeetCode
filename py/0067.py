class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a = a[::-1]
        b = b[::-1]

        lena = len(a)
        lenb = len(b)

        length = max(lena, lenb)
        carry = 0
        res = ""
        for i in range(length):
            current = carry
            carry = 0
            if i < lena and a[i] == '1':
                current += 1
            if i < lenb and b[i] == '1':
                current += 1
            if current > 1:
                current = current % 2
                carry = 1
            res += str(current)
        if carry:
            res += '1'
        res = res[::-1]
        return res
