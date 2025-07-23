#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid; // Found target, but continue searching left
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in right half
        } else {
            high = mid - 1; // Search in left half
        }
    }
    return ans; // Return the first occurrence index
}

int lastOccurance(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid; // Found target, but continue searching right
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in right half
        } else {
            high = mid - 1; // Search in left half
        }
    }
    return ans; // Return the last occurrence index
}

int countOccurrences(vector<int>& arr, int n, int target) {
    int first = firstOccurance(arr, n, target);
    if (first == -1) return 0; // Target not found
    int last = lastOccurance(arr, n, target);
    return last - first + 1; // Count of occurrences
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element to count occurrences: ";
    cin >> target;

    int count = countOccurrences(arr, n, target);
    cout << "Count of occurrences of " << target << " is: " << count << endl;

    return 0;
}