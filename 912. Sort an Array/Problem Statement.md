# [912. Sort an Array](https://leetcode.com/problems/sort-an-array/description/)
<p>
  Given an array of integers <code>nums</code>, sort the array in ascending order and return it.
</p>
<p>
  You must solve the problem without using any <b>built-in functions</b> in <code>O(nlog(n))</code> time complexity and with the smallest space complexity possible.
</p>

<b>Example 1:</b>

    Input: nums = [5,2,3,1]
    Output: [1,2,3,5]
    Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

<b>Example 2:</b>

    Input: nums = [5,1,1,2,0,0]
    Output: [0,0,1,1,2,5]
    Explanation: Note that the values of nums are not necessairly unique.

<b>Constraints:</b>

- <code>1 <= nums.length <= 5 * 10<sup>4</sup></code>
- <code>-5 * 10<sup>4</sup> <= nums[i] <= 5 * 10<sup>4</sup></code>
