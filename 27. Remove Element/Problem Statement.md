# [27. Remove Element](https://leetcode.com/problems/remove-element/description/)
<p>
  Given an integer array <code>nums</code> and an integer <code>val</code>, remove all occurrences of <code>val</code> in <code>nums</code> in-place. The order of the elements may be changed. Then return the number of elements in <code>nums</code> which are not equal to <code>val</code>.
</p>
<p>
  Consider the number of elements in <code>nums</code> which are not equal to <code>val</code> be <code>k</code>, to get accepted, you need to do the following things:
</p>

- Change the array <code>nums</code> such that the first <code>k</code> elements of <code>nums</code> contain the elements which are not equal to <code>val</code>. The remaining elements of nums are not important as well as the size of <code>nums</code>.
- Return <code>k</code>.

<b>Custom Judge:</b>

    int[] nums = [...]; // Input array
    int val = ...; // Value to remove
    int[] expectedNums = [...]; // The expected answer with correct length.
                                // It is sorted with no values equaling val.
    
    int k = removeElement(nums, val); // Calls your implementation
    
    assert k == expectedNums.length;
    sort(nums, 0, k); // Sort the first k elements of nums
    for (int i = 0; i < actualLength; i++) {
        assert nums[i] == expectedNums[i];
    }

If all assertions pass, then your solution will be <b>accepted</b>.

    Example 1:
    Input: nums = [3,2,2,3], val = 3
    Output: 2, nums = [2,2,_,_]
    Explanation: Your function should return k = 2, with the first two elements of nums being 2.
    It does not matter what you leave beyond the returned k (hence they are underscores).
    
    Example 2:
    Input: nums = [0,1,2,2,3,0,4,2], val = 2
    Output: 5, nums = [0,1,4,0,3,_,_,_]
    Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
    Note that the five elements can be returned in any order.
    It does not matter what you leave beyond the returned k (hence they are underscores).

<b>Constraints:</b>

- <code>0 <= nums.length <= 100</code>
- <code>0 <= nums[i] <= 50</code>
- <code>0 <= val <= 100</code>