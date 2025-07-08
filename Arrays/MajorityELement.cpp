#include<bits/stdc++.h>
using namespace std;

    int majorityElement(vector<int>& nums) {
        int counter = 0;
        int element;
        // Moore's Voting Algorithm Implementation
        for(int i = 0; i<nums.size();i++){
            if (counter == 0){
                counter = 1;
                element = nums[i];
            } else if(nums[i] == element){
                counter++;
            } else{
                counter--;
            }
        }
        //The Verification part
        int counter1 = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]==element) counter1++;
        }
        if (counter1 > (nums.size()/2)){
            return element;
        }
        return -1;

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

    int majority = majorityElement(arr);
    if (majority != -1) {
        cout << "The majority element is: " << majority << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}