#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low]; // temp[i-low] gives the correct index in temp as temp starts from 0 and arr starts from low so the offset is needed
    }
}

void MergeSort(vector<int>& arr, int low, int high){
    if (low == high) return;
    int mid = (low + high ) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
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
    MergeSort(array, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}