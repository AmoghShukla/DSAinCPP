#include<bits/stdc++.h>
using namespace std;

int RotateArrayLeft(vector<int>& arr, int n){
    if (n <= 1) return n;
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return n;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    RotateArrayLeft(arr, n);
    cout << "Array after rotating left by one place: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}