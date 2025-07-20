#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicateAndMissing(vector<vector<int>>& grid) {
    int n = grid.size();
    int N = n * n;
    vector<int> freq(N + 1, 0); // frequency array from 1 to n^2

    // Count frequency of each number
    for (const auto& row : grid) {
        for (int num : row) {
            freq[num]++;
        }
    }

    int repeated = -1, missing = -1;

    for (int i = 1; i <= N; ++i) {
        if (freq[i] == 2) repeated = i;
        if (freq[i] == 0) missing = i;
    }

    return {repeated, missing};
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n)); // Initialize a 2D vector of size n x n, Creating a kind of stack of lists.
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    vector<int> result = findDuplicateAndMissing(grid);
    cout << "Repeated Number: " << result[0] << endl;
    cout << "Missing Number: " << result[1] << endl;

    return 0;
}