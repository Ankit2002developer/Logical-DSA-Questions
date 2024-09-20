#include <iostream>
#include <array>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// number of magical rows
int main() {
    int row;
    cin >> row;
    int column;
    cin >> column;
    int library[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> library[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < row; i++) {
        int numberOfOdds = 0;
        for(int j = 0; j < column; j++) {
            if(library[i][j] % 2 != 0) numberOfOdds++;
        }
        if(((numberOfOdds % 2) == 0) && (numberOfOdds > 0)) ans++;
    }
    cout << ans << endl;
}
