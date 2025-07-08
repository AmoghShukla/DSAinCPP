#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& arr, int n){
    int Sum = n*(n+1)/2;
    int Sum2 = 0;
    for(int i = 0; i < n-1; i++){
        Sum2 += arr[i];
    }
    return Sum - Sum2; // The missing number is the difference between the expected sum and the actual sum
}

int main(){

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array (0 to n): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int missingNumber = MissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;


    return 0;
}