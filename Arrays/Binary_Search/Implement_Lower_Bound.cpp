#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n-1, ans = n;
        while(low <= high){
            int mid  = (low + high)/2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    int target = 2;
    int result = lowerBound(arr, target);
    cout << "Lower bound of " << target << " is at index: " << result << endl;
    return 0;
}