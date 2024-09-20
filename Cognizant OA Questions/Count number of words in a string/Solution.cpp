#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// find the number of words in a string

int numberOfWords(string str) {
    int count = 1;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') count++;
        if(str[0] == ' ' || str[str.size() - 1] == ' ') count--;
    }
    return count;
}

int main() {
    string str;
    getline(cin, str);
    cout << numberOfWords(str);
}
