# [1752. Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/)
<p>
  Given an array <code>nums</code>, return <code>true</code> <i>if the array was originally sorted in non-decreasing order</i>, then rotated some number of positions (including zero). Otherwise, return <code>false</code>.
</p>
<p>
  There may be <b>duplicates</b> in the original array.
</p>
<p>
  <b>Note:</b> An array <code>A</code> rotated by <code>x</code> positions results in an array <code>B1</code> of the same length such that <code>A[i] == B[(i+x) % A.length]</code>, where <code>%</code> is the modulo operation.
</p>

    Example 1:
    Input: nums = [3,4,5,1,2]
    Output: true
    Explanation: [1,2,3,4,5] is the original sorted array.
    You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
    
    Example 2:
    Input: nums = [2,1,3,4]
    Output: false
    Explanation: There is no sorted array once rotated that can make nums.
    
    Example 3:
    Input: nums = [1,2,3]
    Output: true
    Explanation: [1,2,3] is the original sorted array.
    You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

<b>Constraints:</b>

- <code> 1 <= nums.length <= 100 </code>
- <code> 1 <= nums[i] <= 100 </code>
