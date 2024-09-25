#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Identify duplicates in an array

vector<int> findDuplicates(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans;
    vector<int> frequency(n);
    for(int i = 0; i < nums.size(); i++) {
        if(++frequency[nums[i]] > 1) ans.push_back(nums[i]);
    }
    return ans;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        vector<int> ans = findDuplicates(arr);
        cout << "Duplicates: ";
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    }
    return 0;
}
