#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// total number of unique marbles left in the jar after each step

string decryptedString(string str) {
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a') {
            str[i] = 'z';
            continue;
        } else {
            str[i]--;
        }
    }
    return str;
}

int main() {
    string str;
    getline(cin, str);
    cout << decryptedString(str);
}
