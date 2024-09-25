#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// check whether a number is armstrong number or not
// an armstrong number is a number which is equal to the sum of its digits each raised to the power of number of digits

bool isArmstrong(long long num) {
    long long temp = num;
    long long sum = 0;
    int numberOfDigits = ((int)(log10(temp) + 1));
    while(temp != 0) {
        sum += (long long)pow((temp % 10), numberOfDigits);
        temp /= 10;
    }
    return num == sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        if(isArmstrong(num)) cout << num << " is an armstrong number";
        else cout << num << " is not an armstrong number";
    }
    return 0;
}
