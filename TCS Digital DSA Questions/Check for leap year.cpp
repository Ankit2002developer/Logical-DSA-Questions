#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// check whether an year is a leap year or not

bool isLeapYear(int year) {
    if(year < 0) return false;
    else if(year % 100 != 0) {
        if(year % 4 == 0) {
            return true;
        } else return false;
    } else {
        if(year % 400 == 0) return true;
        else return false;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int year;
        cin >> year;
        if(isLeapYear(year)) cout << year << " is a leap year";
        else cout << year << " is not a leap year";
    }
    return 0;
}
