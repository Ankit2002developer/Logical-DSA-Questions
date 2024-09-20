#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// total number of switches from odd to even

int numberOfSwitches(vector<int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size() - 1; i++) {
        if((arr[i] % 2 != 0) && (arr[i + 1] % 2 == 0)) ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << numberOfSwitches(arr);
    return 0;
}
