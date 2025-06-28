#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout<< "Enter the elements of the array: ";
        cin >> arr[i];
    }

    // Pre-Computed Hashing
    map <int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]] += 1;
    }

    // Additional feature to iterate in map
    // for(auto it : mpp){
    //     cout << it.first << " : " << it.second << endl;
    // }

    int r;
    cout << "Enter the range of numbers to check their frequency: ";
    cin >> r;
    for (int i=0; i<r; i++){
        int num;
        cout << "Enter the number to check its frequency: ";
        cin >> num;
        // fetch
        cout << mpp[num] << endl;
    }


    return 0;
}