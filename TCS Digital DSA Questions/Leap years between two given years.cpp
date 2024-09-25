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

vector<int> leapYears(int y1, int y2) {
    vector<int> ans;
    for(int i = y1; i <= y2; i++) {
        if(isLeapYear(i)) ans.push_back(i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int year1, year2;
        cin >> year1 >> year2;
        cout << "The leap years between " << year1 << " and " << year2 << " are " << endl;
        vector<int> ans = leapYears(year1, year2);
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    }
    return 0;
}
