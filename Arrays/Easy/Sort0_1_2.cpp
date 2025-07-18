#include<bits/stdc++.h>
using namespace std;

void Sort012(vector<int>&arr){
    int low = 0, mid = 0, high = arr.size()-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    Sort012(arr);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}