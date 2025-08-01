#include <bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1, ans = n;
        while(low <= high){
            int mid  = (low + high)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    return ans;
        
    }

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = searchInsert(nums, target);
    cout << "Insert position of " << target << " is: " << result << endl;
    return 0;
}