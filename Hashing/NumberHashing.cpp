#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        
    cout << "Enter the elements of the array: ";
    cin >> arr[i];
    }

    // Pre-Computed Hashing
    int Hash[13] = {0};
    for (int i = 0; i<n; i++){
        Hash[arr[i]] += 1; 
    }

    int r;
    cin >> r;
    while(r--){
        int num;
        cout << "Enter the number to check its frequency: ";
        cin >> num;
        cout << Hash[num] << endl;
    }

        return 0;
    }