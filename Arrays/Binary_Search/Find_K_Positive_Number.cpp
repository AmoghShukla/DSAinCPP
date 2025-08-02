#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k, int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] - (mid + 1) < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low + k;
}

int main(){
    int n;
    cin  >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << findKthPositive(arr, k, n) << endl;
    return 0;
}