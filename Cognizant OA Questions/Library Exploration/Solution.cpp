#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// total number of books in a single visit

bool isPrime(int n) {
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int maxNumberOfBooks(vector<int> arr, int k, int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(isPrime(i + 1)) {
            if(arr[i] <= k) ans += arr[i];
            else ans += k;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << maxNumberOfBooks(arr, k, n);
    return 0;
}
