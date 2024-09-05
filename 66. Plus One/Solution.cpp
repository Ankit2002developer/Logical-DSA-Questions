class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n - 1] != 9) {
            digits[n - 1]++;
        } else if(digits[n - 1] == 9) {
            int count = 0;
            for(int digit : digits) {
                if(digit == 9) {
                    count++;
                }
            }
            if(count == n) {
                digits[0] = 1;
                for(int i = 1; i < n; i++) {
                    digits[i] = 0;
                }
                digits.push_back(0);
            } else {
                int index = 0;
                for(int i = n - 1; i > 0; i--) {
                    if(digits[i] == 9) {
                        digits[i] = 0;
                        index = i - 1;
                    } else {
                        break;
                    }
                }
                digits[index]++;
            }
        }
        return digits;
    }
};
