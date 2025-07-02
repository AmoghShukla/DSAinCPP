#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& array, int n){
    for(int i=0; i<n-1; i++){
        if(array[i] > array[i+1]) return false;
    }
    return true;
   
}
    

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i<n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    if(isSorted(array, n)){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

}