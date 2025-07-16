#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++) {
        if(ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        } else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }

    return ans;
}


int main() {
    int n;
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }
    vector<vector<int>> result = merge(intervals);
    cout << "Merged Intervals:" << endl;
    for(const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
    }
}