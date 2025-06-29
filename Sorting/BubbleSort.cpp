#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
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
    BubbleSort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}