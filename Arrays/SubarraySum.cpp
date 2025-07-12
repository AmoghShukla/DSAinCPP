#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        mpp[0] = 1;
        int presum = 0;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum]++;
        }

        return cnt;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 5;
    cout << "Number of subarrays with sum " << k << ": " << subarraySum(nums, k) << endl;
    return 0;
}