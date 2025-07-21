#include <bits/stdc++.h>
using namespace std;

int CountPairs(vector<int>& arr, int low, int mid, int high){
    int cnt = 0;
    int right = mid + 1;
    for(int left = low; left <= mid; left++){
        while(right <= high && arr[left] > 2LL * arr[right]){
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

void Merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while(left <= mid) temp.push_back(arr[left++]);
    while(right <= high) temp.push_back(arr[right++]);

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

int MergeSort(vector<int>& arr, int low, int high){
    if(low >= high) return 0;

    int mid = (low + high) / 2;
    int inv = MergeSort(arr, low, mid);
    inv += MergeSort(arr, mid + 1, high);
    inv += CountPairs(arr, low, mid, high);
    Merge(arr, low, mid, high);
    return inv;
}

int ReversePairs(vector<int>& arr, int n){
    return MergeSort(arr, 0, n - 1);
}

int main(){
    vector<int> arr = {1, 3, 2, 3, 1};
    int n = arr.size();
    cout << "Count of reverse pairs is: " << ReversePairs(arr, n) << endl;
    return 0;
}
