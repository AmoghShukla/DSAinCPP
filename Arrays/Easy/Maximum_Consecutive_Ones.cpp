#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(vector<int>& arr, int n){
    int counter = 0;
    int maxnum = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == 1){
            counter++;
            maxnum = max(maxnum, counter);
        } else {
            counter = 0;
        }
    }
    return maxnum;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "The maximum number of consecutive ones is : " << MaxConsecutiveOnes(arr, n) << endl;
    

    return 0;
}