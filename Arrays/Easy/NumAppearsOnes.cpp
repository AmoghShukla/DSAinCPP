#include<bits/stdc++.h>
using namespace std;

int CountOnes(vector<int>& arr, int n){
    int XOR = 0;
    for (int i = 0; i < n; i++){
        XOR ^= arr[i];
    }
    return XOR;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int countOnes = CountOnes(arr, n);
    cout << "The number that appears once is: " << countOnes << endl;


    return 0;
}