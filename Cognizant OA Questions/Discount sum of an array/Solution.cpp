#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// discount of an array

int discountArraySum(vector<int> arr, int n) {
    int arraySize = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0; 
    int j = 1;
    while(j < arraySize) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    int newArraySize = i + 1;
    vector<int> newArray(newArraySize);
    for(int a = 0; a <= i; a++) {
        newArray[a] = arr[a];
    }
    int sum = 0;
    for(int k = i; k > (i - n); k--) sum += newArray[k];
    sum -= newArray[i];
    return sum;
}

int main() {
    int k;
    cin >> k;
    vector<int> arr(k);
    for(int i = 0; i < k; i++) cin >> arr[i];
    int n;
    cin >> n;
    cout << discountArraySum(arr, n);
}
