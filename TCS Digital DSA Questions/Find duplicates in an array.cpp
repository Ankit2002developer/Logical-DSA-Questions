#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Identify duplicates in an array

vector<int> findDuplicates(vector<int> arr) {
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++) {
        if(count(arr.begin(), arr.end(), arr[i]) > 1 && find(ans.begin(), ans.end(), arr[i]) == ans.end()) ans.push_back(arr[i]);
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
