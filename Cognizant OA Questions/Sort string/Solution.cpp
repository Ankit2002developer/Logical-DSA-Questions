#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// minimum number of characters to interchange to sort the string

int minimumSort(string str) {
    string s = str;
    int n = str.size();
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(str[j] < str[minIndex]) {
                char temp = str[j];
                str[j] = str[minIndex];
                str[minIndex] = temp;
            }
        }
    }
    int count = n;
    for(int i = 0; i < n; i++) {
        if(s[i] == str[i]) count--;
    }
    return count;
}

int main() {
    string str;
    getline(cin, str);
    cout << minimumSort(str);
}
