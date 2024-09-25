#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Calculate the sum of digits of a number

long long sumOfDigits(long long num) {
    long long sum = 0;
    while(num != 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        cout << "Sum of digits of " << num << " is ";
        cout << sumOfDigits(num) << endl;
    }
    return 0;
}
