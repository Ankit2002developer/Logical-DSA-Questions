#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// check whether a number is perfect number or not
// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding itself.

bool isPerfectNumber(long long num) {
    long long sum = 0;
    for(int i = 1; i <= (num / 2); i++) {
        if(num % i == 0) sum += i;
    }
    return num == sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        if(isPerfectNumber(num)) cout << num << " is a perfect number";
        else cout << num << " is not a perfect number";
    }
    return 0;
}
