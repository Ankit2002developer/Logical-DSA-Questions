#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Calculate the sum of digits of a number

long long newNum(long long num) {
    string str = to_string(num);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '0') {
            str[i] = '5';
        }
    }
    num = stoi(str);
    return num;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long num;
        cin >> num;
        cout << newNum(num) << endl;
    }
    return 0;
}
