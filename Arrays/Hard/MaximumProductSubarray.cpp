#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1, suffix = 1, maxi = INT_MIN;
        for(int i = 0; i < n ; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n-i-1];

            maxi = max(maxi, max(prefix, suffix));

        }
        return maxi;
        
    }

int main(){
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum product subarray is: " << maxProduct(nums) << endl;
    return 0;
}