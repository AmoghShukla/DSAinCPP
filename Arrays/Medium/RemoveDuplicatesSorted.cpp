#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicatesSorted(vector<int>& array, int n){
    if (array.empty()) return 0;
    int i = 0;
    for(int j = 1; j<n; j++){
        if (array[i] != array[j]){
            array[i+1] = array[j];
            i++;

        }

    }
    return i+1;
}

int main(){
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    int newSize = RemoveDuplicatesSorted(array, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << array[i] << " ";
    }
}