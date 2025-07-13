#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int rowNum) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); 

    for (int col = 1; col <= rowNum; col++) {
        ans = ans * (rowNum - col + 1);
        ans = ans / col;
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

    for (int i = 0; i < numRows; i++) {
        ans.push_back(generateRow(i));
    }

    return ans;
}


int main(){
    int numRows = 5;
    vector<vector<int>> pascalTriangle = generate(numRows);

    for (const auto& row : pascalTriangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}