#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// check whether a number is prime or not

bool isPrime(int num) {
    if(num == 1) return false;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        if(isPrime(num)) cout << num << " is a prime number";
        else cout << num << " is not a prime number";
    }
    return 0;
}
