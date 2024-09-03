class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int minIndex = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                minIndex = i + 1;
            }
        }
        if(nums[n - 1] > nums[0] && minIndex != 0) {
            return false;
        }
        for(int i = 0; i < minIndex - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }
        for(int i = minIndex; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
