#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>& arr, int n, int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid; // Target found
        else if(arr[mid] < target) low = mid + 1; // Search in right half
        else high = mid - 1; // Search in left half
    }
    return -1; // Target not found
}

int main(){
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = binarysearch(arr, n, target);
    if(result != -1) cout << "Element found at index: " << result << endl;
    else cout << "Element not found" << endl;
}