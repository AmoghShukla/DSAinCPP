#include <bits/stdc++.h>
using namespace std;

int findMaxIndex(vector<vector<int>>& mat, int n, int m, int col) {
    int maxValue = INT_MIN;  // handles negatives too
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (mat[i][col] > maxValue) {
            maxValue = mat[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int MaxRowIndex = findMaxIndex(mat, n, m, mid);
        int left = mid - 1 >= 0 ? mat[MaxRowIndex][mid - 1] : INT_MIN;
        int right = mid + 1 < m ? mat[MaxRowIndex][mid + 1] : INT_MIN;
        if (mat[MaxRowIndex][mid] > left && mat[MaxRowIndex][mid] > right) {
            return {MaxRowIndex, mid};
        } else if (mat[MaxRowIndex][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {6, 5, 4},
        {7, 8, 9}
    };
    vector<int> peak = findPeakGrid(mat);
    cout << "Peak Element found at: (" << peak[0] << ", " << peak[1] << ")" << endl;
    return 0;
}
