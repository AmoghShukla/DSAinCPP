#include<bits/stdc++.h>
using namespace std;

int FindPeak(vector<int>& arr, int n) {
    if (n == 1) return arr[0]; // If there's only one element, return it
    if (arr[0] >= arr[1]) return arr[0]; // If the first element is greater than the second
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1]; // If the last element is greater than the second last

    int low = 1, high = n - 2; // Start from the second element to the second last element
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is a peak element
        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
            return arr[mid];
        }

        // If mid is not a peak, move to the half where a peak might exist
        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }
    return -1; // Should not reach here in valid input
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = FindPeak(arr, n);
    cout << "A peak element in the array is: " << result << endl;

    return 0;
}