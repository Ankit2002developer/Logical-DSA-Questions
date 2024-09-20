#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// maximum number of books alex can read

int maxNumberOfBooks(vector<int> arr, int n, int size) {
    sort(arr.begin(), arr.end());
    int sum = 0;
    int ans = 0;
    int i = 0;
    while(sum <= n) {
        if(i >= n) break;
        ans++;
        sum += arr[i];
        i++;
    }
    return ans - 1;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i < size; i++) cin >> arr[i];
    int n;
    cin >> n;
    cout << maxNumberOfBooks(arr, n, size);
    return 0;
}
