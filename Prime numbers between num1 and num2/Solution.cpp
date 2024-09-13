#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if(num == 1) return false;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

void primeNumbers(int a, int b) {
    for(int i = a; i <= b; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
    primeNumbers(num1, num2);
    return 0;
}
