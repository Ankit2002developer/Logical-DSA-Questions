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

vector<int> primeNumbers(int num1, int num2) {
    vector<int> ans;
    for(int i = num1; i <= num2; i++) {
        if(isPrime(i)) ans.push_back(i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> ans = primeNumbers(n1, n2);
        cout << "The prime numbers between " << n1 << " and " << n2 << " are " << endl;
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    }
    return 0;
}
