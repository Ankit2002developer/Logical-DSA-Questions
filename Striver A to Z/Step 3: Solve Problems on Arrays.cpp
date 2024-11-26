// finding the maximum element in an array

#include <bits/stdc++.h>
using namespace std;

int maximumElement(vector<int> arr) {
    int maxi = INT_MIN;
    for(int num : arr) maxi = max(maxi, num);
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << maximumElement(arr);
    return 0;
}

// find the second largest element in array

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr) {
    int largest = INT_MIN;
    for(int num : arr) largest = max(largest, num);
    int secondMax = INT_MIN;
    for(int num : arr) {
        if(num > secondMax && num < largest) secondMax = num;
    }
    return secondMax;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << secondLargest(arr);
    return 0;
}

// find second smallest and second largest element in an array

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> a) {
    int largest = INT_MIN;
    int secondMax = INT_MIN;
    for(int num : a) {
        if(num > largest) {
            secondMax = largest;
            largest = num;
        } else if(num > secondMax && num < largest) secondMax = num;
    }
    return secondMax;
}

int secondSmallest(vector<int> a) {
    int smallest = INT_MAX;
    int secondMin = INT_MAX;
    for(int num : a) {
        if(num < smallest) {
            secondMin = smallest;
            smallest = num;
        } else if(num < secondMin && num > smallest) secondMin = num;
    }
    return secondMin;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int secondMax = secondLargest(a);
    int secondMin = secondSmallest(a);
    vector<int> ans(2);
    ans[0] = secondMax;
    ans[1] = secondMin;
    return ans;
}

// find whether the array is sorted or not

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr) {
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(isSorted(arr)) cout << "Sorted";
    else cout << "Not sorted";
    return 0;
}
