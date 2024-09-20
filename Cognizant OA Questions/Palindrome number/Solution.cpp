#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// find the total number of palindromes

void isPalindrome(int num) {
    if(num < 0) cout << "Invalid Input" << endl;
    else {
        int reverse = 0;
        int temp = num;
        while(temp > 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        if(num == reverse) cout << "Palindrome" << endl;
        else cout << "Not a Palindrome" << endl;
    }
}

int main() {
    int num;
    cin >> num;
    isPalindrome(num);
    return 0;
}
