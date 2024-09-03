/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
    let n = nums.length;
    let minIndex = 0;
    for(let i = 0; i < n - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            minIndex = i + 1;
        }
    }
    if(nums[n - 1] > nums[0] && minIndex != 0) {
        return false;
    }
    for(let i = 0; i < minIndex - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            return false;
        }
    }
    for(let i = minIndex; i < n - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
};
