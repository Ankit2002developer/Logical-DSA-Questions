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

vector<int> perfectNumbers(int num1, int num2) {
    vector<int> ans;
    for(int i = num1; i <= num2; i++) {
        if(isPerfectNumber(i)) ans.push_back(i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num1, num2;
        cin >> num1 >> num2;
        vector<int> ans = perfectNumbers(num1, num2);
        cout << "The perfect numbers between " << num1 << " and " << num2 << " are: " << endl;
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    }
    return 0;
}
