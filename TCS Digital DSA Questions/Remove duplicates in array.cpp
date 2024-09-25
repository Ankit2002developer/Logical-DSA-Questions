#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Identify duplicates in an array

vector<int> uniqueArray(vector<int> &nums) {
    int n = nums.size();
    int i = 0;
    for(int j = 0; j < n; j++) {
        if(nums[j] != nums[j + 1]) {
            nums[i++] = nums[j];
        }
    }
    nums[i++] = nums[n - 1];
    nums.resize(i - 1);
    return nums;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans = uniqueArray(arr);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    return 0;
}
