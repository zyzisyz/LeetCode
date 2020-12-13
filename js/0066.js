/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
    digits.reverse();

    var carry = 1;
    for (let i = 0; i < digits.length; i++) {
        digits[i] += carry;
        carry = 0;
        if (digits[i] >= 10) {
            digits[i] = digits[i] % 10;
            carry = 1;
        }
        if (carry == 0) break;
    }
    if (carry) digits.push(1);
    digits.reverse();
    return digits;
};