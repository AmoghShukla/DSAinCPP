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
    int SecondLargest = 0;
    for (int i=0; i<n; i++){
        if (arr[i] > largest){
            SecondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > SecondLargest && arr[i] < largest){
            SecondLargest = arr[i];
        }
    }
    cout << "The Second largest number in the array is: " << SecondLargest << endl;
    return 0; 
}