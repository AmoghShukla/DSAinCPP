#include<bits/stdc++.h>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    int total = n1 + n2;
    int ind1 = (total - 1) / 2;
    int ind2 = total / 2;

    int i = 0, j = 0, cnt = -1;
    int val = 0, median1 = 0, median2 = 0;

    while (i < n1 && j < n2) {
        if (nums1[i] < nums2[j]) {
            val = nums1[i++];
        } else {
            val = nums2[j++];
        }
        cnt++;
        if (cnt == ind1) median1 = val;
        if (cnt == ind2) {
            median2 = val;
            break;
        }
    }

    while (i < n1 && cnt < ind2) {
        val = nums1[i++];
        cnt++;
        if (cnt == ind1) median1 = val;
        if (cnt == ind2) {
            median2 = val;
            break;
        }
    }

    while (j < n2 && cnt < ind2) {
        val = nums2[j++];
        cnt++;
        if (cnt == ind1) median1 = val;
        if (cnt == ind2) {
            median2 = val;
            break;
        }
    }

    if (total % 2 == 1) return median2;
    return (median1 + median2) / 2.0;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1), nums2(n2);
    for (int i = 0; i < n1; i++) cin >> nums1[i];
    for (int i = 0; i < n2; i++) cin >> nums2[i];
    cout << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}