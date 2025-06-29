#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            // Swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }

}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}