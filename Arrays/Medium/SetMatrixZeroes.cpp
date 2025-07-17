#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;

    // Step 1: Mark the zeros using first row & first column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if (j != 0) {
                    matrix[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }

    // Step 2: Set inner cells to 0 based on markers
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Set first row to 0 if needed
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Set first column to 0 if needed
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    // Print the result
    cout << "Modified Matrix:" << endl;
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}