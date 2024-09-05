/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let n = digits.length;
    if(digits[n - 1] != 9) {
        digits[n - 1]++;
    } else if(digits[n - 1] == 9) {
        let count = 0;
        for(let i = 0; i < n; i++) {
            if(digits[i] == 9) {
                count++;
            }
        }
        if(count == n) {
            digits[0] = 1;
            for(let i = 1; i < n; i++) {
                digits[i] = 0;
            }
            digits.push(0);
        } else {
            let index = 0;
            for(let i = n - 1; i > 0; i--) {
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
};
