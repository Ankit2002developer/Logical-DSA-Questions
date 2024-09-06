/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let n = nums.length;
    let i = 0;
    for(let j = 0; j < n; j++) {
        if(nums[j] !== val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
};
