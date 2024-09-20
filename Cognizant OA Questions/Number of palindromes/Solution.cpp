#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// find the total number of palindromes

int numberOfPalindromes(string str, int n) {
    int ans = 1;
    for(int i = 0; i < str.size() / 2; i++) {
        if((str[i] == str[str.size() - i - 1]) && (str[i] == '_')) ans *= 26;
    }
    if((str.size() % 2 != 0) && (str[str.size() / 2] == '_')) ans *= 26;
    return (ans % n);
}

int main() {
    string str;
    getline(cin, str);
    int n;
    cin >> n;
    cout << numberOfPalindromes(str, n);
    return 0;
}
