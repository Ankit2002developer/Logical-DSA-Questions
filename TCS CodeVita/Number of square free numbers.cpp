#include <bits/stdc++.h>
using namespace std;

// write a program to find the number of square free numbers that divide a given number

bool isPerfectSquare(int num) {
    return num == sqrt(num) * sqrt(num);
}

bool isSquareFree(int n) {
    if(n == 1 || isPerfectSquare(n)) return false;
    for(int i = 2; i <= n/2; i++) {
        if((n % i == 0) && isPerfectSquare(i)) return false;
    }
    return true;
}

int numberOfSqFree(int num) {
    int count = 0;
    for(int i = 2; i <= num/2; i++) {
        if((num % i == 0) && isSquareFree(i)) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << numberOfSqFree(n);
}
