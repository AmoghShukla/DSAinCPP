#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int index = -1;

    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    for(int i = n - 1; i > index; i--) {
        if(nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }

    reverse(nums.begin() + index + 1, nums.end());
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    nextPermutation(arr);
    
    cout << "Next permutation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}