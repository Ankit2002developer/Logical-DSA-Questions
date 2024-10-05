#include <iostream>
#include <queue>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Basic recursion problems
// print all the subsequence of an array whose sum is k

void subSequence(int index, vector<int> &ans, int arr[], int n, int k, int sum) {
    if(index >= n) {
        if(sum == k) {
            for(auto it : ans) {
            cout << it << " ";
            }
            if(ans.size() == 0) cout << "null";
            cout << endl;
        }
        return;
    }
    
    ans.push_back(arr[index]);
    sum += arr[index];
    subSequence(index + 1, ans, arr, n, k, sum);
    ans.pop_back();
    sum -= arr[index];
    subSequence(index + 1, ans, arr, n, k, sum);
}

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> ans;
    subSequence(0, ans, arr, n, 8, 0);
    return 0;
}
