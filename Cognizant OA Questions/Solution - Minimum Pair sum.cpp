#include <iostream>
#include <array>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int pairSumOfArrays(vector<int> arr1, vector<int> arr2, int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (arr1[i] * arr2[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];
    
    int minSum = pairSumOfArrays(arr1, arr2, n);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(arr1[i], arr1[j]);
            minSum = min(minSum, pairSumOfArrays(arr1, arr2, n));
            for(int k = i + 1; k < n; k++) {
                swap(arr2[i], arr2[k]);
                minSum = min(minSum, pairSumOfArrays(arr1, arr2, n));
            }
        }
    }
    cout << minSum << endl;
}
