// if the output is just a Yes or No, then this code is the most optimal solution for the 2Sum problem.

#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    sort(nums.begin(), nums.end()); 
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return true; 
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
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
    bool result = twoSum(arr, target);
    if (result) {
        cout << "Yes, there are two numbers that add up to " << target << "." << endl;
    } else {
        cout << "No, there are no two numbers that add up to " << target << "." << endl;
    }
    return 0;
}
