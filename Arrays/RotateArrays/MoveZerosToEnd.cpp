#include<bits/stdc++.h>
using namespace std;

void movezerostoend(int arr[], int n){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i<n; i++){
        if (arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter Element" << i + 1 << ": ";
        cin >> arr[i];
    }

    movezerostoend(arr, n);
    cout << "Array after moving zeros to the end: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }


    return 0;
}