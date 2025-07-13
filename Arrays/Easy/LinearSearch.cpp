#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter Element" << i + 1 << ": ";
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    for (int i=0; i<n; i++){
        if (arr[i] == num){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return -1;
}

    

    
