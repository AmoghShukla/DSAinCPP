#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);
    int pos = 0; int neg = 1;
    for(int i = 0; i <n ; i++){
        if(nums[i] < 0){
            ans[neg] = nums[i];
            neg += 2;
        } else{
            ans[pos] = nums[i];
            pos += 2;
        }
    }
    return ans;
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

    vector<int> rearranged = rearrangeArray(arr);
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << rearranged[i] << " ";
    }
    cout << endl;

    return 0;
}
