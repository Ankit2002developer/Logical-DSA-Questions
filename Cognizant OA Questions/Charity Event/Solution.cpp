#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// total number of chocolates distributed

int numberOfChocolates(int n) {
    int number = 0;
    for(int i = 1; i <= n; i++) {
        number += i;
    }
    number += (4 * (n / 5));
    return number;
}

int main() {
    int n;
    cin >> n;
    cout << numberOfChocolates(n);
    return 0;
}
