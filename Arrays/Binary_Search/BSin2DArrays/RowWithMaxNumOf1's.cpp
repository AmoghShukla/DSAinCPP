#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int RowWithMax1s(vector<vector<int>>& mat, int n, int m) {
    int index = 0, maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = m - lowerBound(mat[i], m, 1);
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    return index;
}