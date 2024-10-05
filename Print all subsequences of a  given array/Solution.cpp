#include <iostream>
#include <queue>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Basic recursion problems
// print all the subsequence of an array

void subSequence(int index, vector<int> &ans, int arr[], int n) {
    if(index >= n) {
        for(auto it : ans) {
            cout << it << " ";
        }
        if(ans.size() == 0) cout << "null";
        cout << endl;
        return;
    }
    subSequence(index + 1, ans, arr, n);
    ans.push_back(arr[index]);
    subSequence(index + 1, ans, arr, n);
    ans.pop_back();
}

int main() {
    int n = 4;
    int arr[4] = {1, 2, 3, 4};
    vector<int> ans;
    subSequence(0, ans, arr, n);
    return 0;
}
