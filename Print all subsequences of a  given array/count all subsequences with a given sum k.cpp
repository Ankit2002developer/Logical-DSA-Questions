#include <iostream>
#include <queue>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Basic recursion problems
// count all the subsequence of an array whose sum is k

int subSequence(int index, vector<int> &ans, int arr[], int n, int k, int sum) {
    if(index >= n) {
        if(sum == k) return 1;
        return 0;
    }
    
    ans.push_back(arr[index]);
    sum += arr[index];
    int l = subSequence(index + 1, ans, arr, n, k, sum);
    ans.pop_back();
    sum -= arr[index];
    int r = subSequence(index + 1, ans, arr, n, k, sum);
    return l + r;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    vector<int> ans;
    cout << subSequence(0, ans, arr, n, k, 0);
    return 0;
}
