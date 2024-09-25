#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Calculate the sum of first n naturl numbers

long long sumOfFirst_n_naturalNumbers(long long num) {
    long long sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += (long long) i;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        cout << "The sum of first " << num << " natural numbers is: ";
        cout << sumOfFirst_n_naturalNumbers(num) << endl;
    }
    return 0;
}
