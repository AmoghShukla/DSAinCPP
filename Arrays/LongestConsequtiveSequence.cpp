#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;

    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 0;

    for(int num : st) {
        if(st.find(num - 1) == st.end()) {
            int current = num;
            int count = 1;
            while(st.find(current + 1) != st.end()) {
                current++;
                count++;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = longestConsecutive(nums);
    cout << "Longest Consecutive Sequence Length: " << result << endl;
    return 0;
}