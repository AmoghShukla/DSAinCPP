#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest number in the array is: " << largest << endl;
    return 0; 
}