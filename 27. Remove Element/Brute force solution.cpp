class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> expectedNums;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                expectedNums.push_back(nums[i]);
            }
        }
        nums = expectedNums;
        return expectedNums.size();
    }
};
