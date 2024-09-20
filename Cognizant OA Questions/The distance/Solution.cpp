#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// maximum distance between two non-similar characters

int maxDistance(string str) {
    int maxi = 0;
    for(int i = 0; i < str.size(); i++) {
        for(int j = i + 1; j < str.size(); j++) {
            if(str[i] != str[j]) {
                maxi = max(maxi, abs(i - j));
            }
        }
    }
    return maxi;
}

int main() {
    string str;
    getline(cin, str);
    cout << maxDistance(str);
    return 0;
}
