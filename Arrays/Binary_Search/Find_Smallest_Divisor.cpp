#include<bits/stdc++.h>
using namespace std;

int SumByDivisor(vector<int>& arr, int divisor) {
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += (arr[i] + divisor - 1) / divisor; 
    }
    return sum;
}

int SmallestDivisor(vector<int>& arr, int threshold){
    int low = 1, high = *max_element(arr.begin(), arr.end());
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (SumByDivisor(arr, mid) > threshold) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}