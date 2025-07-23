#include<bits/stdc++.h>
using namespace std;

int floor(vector<int>& arr, int x) {
    int ans = -1;
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] <= x) {
            ans = arr[mid];   // Possible floor
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int ceiling(vector<int>& arr, int x) {
    int ans = -1;
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = arr[mid];   // Possible ceiling
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the value to find floor and ceiling: ";
    cin >> x;
    int floorValue = floor(arr, x);
    int ceilingValue = ceiling(arr, x);
    cout << "Floor of " << x << " is: " << floorValue << endl;
    cout << "Ceiling of " << x << " is: " << ceilingValue << endl;
    return 0;
}