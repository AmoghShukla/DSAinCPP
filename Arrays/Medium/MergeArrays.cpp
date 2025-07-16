#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> arr(m + n); 

    int left = 0;
    int right = 0;
    int index = 0;

    while (left < m && right < n) {
        if (nums1[left] <= nums2[right]) {
            arr[index] = nums1[left];
            left++;
        } else {
            arr[index] = nums2[right];
            right++;
        }
        index++;
    }

    while (left < m) {
        arr[index++] = nums1[left++];
    }

    while (right < n) { 
        arr[index++] = nums2[right++];
    }

    for (int i = 0; i < m + n; i++) {
        nums1[i] = arr[i];
    }
}

int main(){
    int n;
    int m;
    cin >> m >> n;
    vector<int> nums1(m + n);
    vector<int> nums2(n);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    merge(nums1, m, nums2, n);
    cout << "Merged Array:" << endl;
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}