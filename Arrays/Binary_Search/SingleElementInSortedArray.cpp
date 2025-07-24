#include<bits/stdc++.h>
using namespace std;

int SingleElement(vector<int>& arr, int n){
    if(n == 1) return arr[0]; // If there's only one element, return it
    if(arr[0] != arr[1]) return arr[0]; // If the first element is unique
    if(arr[n-1] != arr[n-2]) return arr[n-1]; // If the last element is unique
    int low = 1, high = n - 2; // Start from the second element to the second last element
    while(low <= high){
        int mid = low + (high - low) / 2;

        // Check if mid is the unique element
        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        // If mid is even and the left neighbor is the same, search in the right half
        if(mid % 2 == 0 && arr[mid] == arr[mid + 1]) {
            low = mid + 2; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
        
    }
    return -1; // If no unique element is found, return -1 (should not happen in valid input)
}

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int result = SingleElement(arr, n);
    cout << "The single element in the sorted array is: " << result << endl;
    
    return 0;
}