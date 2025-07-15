#include<bits/stdc++.h>
using namespace std;

int subarraywithXORk(vector<int>& arr, int k){
    int xr = 0;
    int cnt = 0;
    map<int, int> mpp;
    mpp[xr]++;
    for(int i = 0; i < arr.size(); i++){
        // Calculate the prefix XOR
        xr ^= arr[i];
        // If the prefix XOR is equal to k, increment count
        int x = xr ^ k;
        // If the XOR of prefix XOR and k exists in the map, add its count to cnt
        cnt += mpp[x];
        // Increment the count of the current prefix XOR in the map
        mpp[xr]++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << subarraywithXORk(arr, k) << endl;
    return 0;
}