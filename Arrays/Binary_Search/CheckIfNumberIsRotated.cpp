#include<bits/stdc++.h>
using namespace std;

int CheckRotated(vector<int>& arr, int n){
    int low = 0, high = n-1, ans = INT_MAX, index = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;

        // Update After Once Coded (extremely Temprory part can add or not )

        // If the search space is already sorted
        // then arr[low] is the always the minimum
        // so we can return it directly
        if(arr[low] < arr[high]){
            ans = min(ans, arr[low]);
            index = low; // Store the index of the minimum element
            break; // Exit the loop as we found the minimum
        }


        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]); // Update answer with minimum found so far
            index = low; // Store the index of the minimum element
            high = mid - 1; // Search in the left half
        } else {
            ans = min(ans, arr[mid]); // Update answer with minimum found so far
            index = mid; // Store the index of the minimum element
            low = mid + 1; // Search in the right half
        }
    }
    return index;
}

int main() {
    int n;
    cout << "Enter the number of elements in the rotated sorted array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int result = CheckRotated(arr, n);
    cout << "The minimum element in the rotated sorted array is: " << result << endl;
    
    return 0;
}