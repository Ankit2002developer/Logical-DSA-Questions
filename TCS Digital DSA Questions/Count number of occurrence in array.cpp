int firstOccurence(vector<int> arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end) {
        int mid = start + ((end - start) / 2);
        if(arr[mid] == x) {
            ans = mid;
            end = mid - 1;
        } else if(arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end) {
        int mid = start + ((end - start) / 2);
        if(arr[mid] == x) {
            ans = mid;
            start = mid + 1;
        } else if(arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int countOccurrences(vector < int > arr, int x) {
    // Write your code here.
    int first = firstOccurence(arr, x);
    int last = lastOccurence(arr, x);
    if(first == -1) return 0;
    return last - first + 1;
}
