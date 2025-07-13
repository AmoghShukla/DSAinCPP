#include<bits/stdc++.h>
using namespace std;

int LongestSubArrayWithSumK(vector<int>& arr,int n, int k){
    int left = 0, right = 0, maxLength = 0;
    long long sum = arr[0];
    while(right < n){
        while (left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if (sum == k){
            maxLength = max(maxLength, right - left + 1);
        }
        right++;
        if (right < n) {
            sum += arr[right];
        }
    }
    return maxLength;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = LongestSubArrayWithSumK(arr, n, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}