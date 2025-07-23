#include<bits/stdc++.h>
using namespace std;

int funct(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        
        // If left helf is sorted 
        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target < arr[mid]){
                high = mid - 1; // Target is in the left half
            } else {
                low = mid + 1; // Target is in the right half
            }
        } else { // Right half is sorted
            if(arr[mid] < target && target <= arr[high]){
                low = mid + 1; // Target is in the right half
            } else {
                high = mid - 1; // Target is in the left half
            }
        }
    }
    return -1; // Target not found
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the rotated sorted array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = funct(arr, target);
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}