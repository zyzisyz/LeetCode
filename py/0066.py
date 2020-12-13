class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits = digits[::-1]
        carry = 1
        for i in range(len(digits)):
            digits[i] += carry
            carry = 0
            if digits[i] > 9:
                digits[i] = digits[i] % 10
                carry = 1
            if carry == 0:
                break
        if carry:
            digits.append(1)
        digits.reverse()
        return digits
