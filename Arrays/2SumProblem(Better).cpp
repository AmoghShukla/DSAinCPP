// If the index of the nums are asked as an output, then this code is the most optimal solution for the 2Sum problem.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end()){
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    vector<int> result = twoSum(arr, target);
    if (result[0] != -1) {
        cout << "Indices of the two numbers that add up to " << target << " are: " 
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to " << target << endl;
    }
}