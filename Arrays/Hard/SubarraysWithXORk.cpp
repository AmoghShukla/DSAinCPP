#include<bits/stdc++.h>
using namespace std;

int subarraywithXORk(vector<int>& arr, int k){\
    // This function counts the number of subarrays with XOR equal to k
    int xr = 0;
    // xr will hold the prefix XOR
    // Initialize a map to store the frequency of prefix XOR values
    int cnt = 0;
    // cnt will hold the count of subarrays with XOR equal to k
    // Initialize the map with the prefix XOR of 0
    map<int, int> mpp;
    mpp[xr]++;
    // Increment the count of prefix XOR 0 to handle the case when a subarray itself has XOR equal to k
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
    // Return the total count of subarrays with XOR equal to k
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