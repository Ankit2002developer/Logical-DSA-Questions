#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Generate fibonacci series upto n terms

vector<long long> fibonacci(long long num) {
    vector<long long> ans(num);
    for(int i = 0; i < num; i++) {
        if(i == 0 || i == 1) ans[i] = i;
        else {
            ans[i] = ans[i - 1] + ans [i - 2];
        }
    }
    return ans;
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cout << "Enter the number of terms: ";
        cin >> num;
        cout << "The fibonacci series with " << num << " terms is " << endl;
        vector<long long> ans = fibonacci(num);
        for(int i = 0; i < num; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}


// alternate solution

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Generate fibonacci series upto n terms

vector<int> fibonacci(int num) {
    vector<int> ans;
    int first = 0;
    int second = 1;
    ans.push_back(first);
    ans.push_back(second);
    for(int i = 3; i <= num; i++) {
        int next = first + second;
        ans.push_back(next);
        first = second;
        second = next;
    }
    return ans;
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cout << "Enter the number of terms: ";
        cin >> num;
        cout << "The fibonacci series with " << num << " terms is " << endl;
        vector<int> ans = fibonacci(num);
        for(int i = 0; i < num; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
