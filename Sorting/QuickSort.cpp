#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& array, int low, int high) {
    int pivot = array[low];
    int i = low;
    int j = high;
    while(i<j){
        while(array[i] <= pivot && i < high){
            i++;
        }
        while(array[j] > pivot && j > low){
            j--;
        }
        if (i < j) swap(array[i], array[j]);
    }
    swap(array[low], array[j]);
    return j;
}

void Quicksort(vector<int>& array, int low, int high){
    if (low < high){
        int P_Index = partition(array, low, high);
        Quicksort(array, low, P_Index-1);
        Quicksort(array, P_Index+1, high);
    }
}
int main(){
    vector<int> array;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        array.push_back(x);
    }
    Quicksort(array, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}