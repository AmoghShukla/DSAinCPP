#include<bits/stdc++.h>
using namespace std;

void leftRotateArray(int arr[], int n, int k){
    k = k % n; // Handle cases where k is greater than n
    if (k < 0) k += n; // Handle negative rotations

    int temp[k];
    for(int i = 0; i<k ; i++){
        temp[i] = arr[i];
    }

    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }
    for(int i = n-k; i<n; i++){
        arr[i]  = temp[i-(n-k)];
    }
}

int main(){
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number of places to rotate left: ";
    cin >> k;
    leftRotateArray(arr, n, k);
    cout << "Array after rotating left by " << k << " places: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}