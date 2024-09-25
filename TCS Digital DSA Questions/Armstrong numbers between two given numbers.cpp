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

vector<int> armstrongNumbers(int num1, int num2) {
    vector<int> ans;
    for(int i = num1; i <= num2; i++) {
        if(isArmstrong(i)) ans.push_back(i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num1, num2;
        cin >> num1 >> num2;
        vector<int> ans = armstrongNumbers(num1, num2);
        cout << "The armstrong numbers between " << num1 << " and " << num2 << " are " << endl;
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    }
    return 0;
}
