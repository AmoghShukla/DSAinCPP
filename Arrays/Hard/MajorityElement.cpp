#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {
        if(cnt1 == 0 && nums[i] != ele2) {
            cnt1 = 1;
            ele1 = nums[i];
        } else if(cnt2 == 0 && nums[i] != ele1) {
            cnt2 = 1;
            ele2 = nums[i];
        } else if(nums[i] == ele1) {
            cnt1++;
        } else if(nums[i] == ele2) {
            cnt2++;
        } else {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ls;
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == ele1) cnt1++;
        if(nums[i] == ele2) cnt2++;
    }

    int mini = nums.size() / 3 + 1;
    if(cnt1 >= mini) ls.push_back(ele1);
    if(cnt2 >= mini && ele2 != ele1) ls.push_back(ele2);

    sort(ls.begin(), ls.end());
    return ls;
}


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = majorityElement(nums);
    cout << "Majority Elements: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Count: " << result.size() << endl;

    return 0;
}