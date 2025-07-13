#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = spiralOrder(matrix);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.size() == 0) return {};
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0; int right = m-1;
        int top = 0; int bottom = n-1;
        vector<int> ans;
        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    };