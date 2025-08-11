#include<bits/stdc++.h>
using namespace std;

int UpperBound(vector<int>& row, int target) {
    int n = row.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int midIndex = (low + high) / 2;
        if (row[midIndex] <= target) {
            low = midIndex + 1;
        } else {
            high = midIndex - 1;
        }
    }
    return low; 
}

int BlackBox(vector<vector<int>>& mat, int mid){
    int n = mat.size();
    int cnt = 0;
    for( int i = 0; i<n; i++){
        cnt += UpperBound(mat[i], mid);
    }
    return cnt;
}

int FindMedian(vector<vector<int>>& mat) {
    int low = INT_MAX, high = INT_MIN, req = (mat.size() * mat[0].size() + 1) / 2;
    for (int i = 0; i < mat.size(); i++) {
    low = min(low, mat[i][0]);            // smallest element in the matrix
    high = max(high, mat[i].back());      // largest element in the matrix
    }
    while(low <= high){
        int mid = (low + high) / 2;
        int SmallerEquals = BlackBox(mat, mid);
        if (SmallerEquals < req) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    cout << FindMedian(mat) << endl;
    return 0;
}