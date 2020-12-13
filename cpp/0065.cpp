class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());

        int n = digits.size();
        int carry = 1;
        for(int i=0; i<n; i++) {
            digits[i] += carry;
            carry = 0;
            if(digits[i]>9) {
                digits[i] = digits[i]%1;
                carry = 1;
            }
            if(carry==0) break;
        }
        if(carry) digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};