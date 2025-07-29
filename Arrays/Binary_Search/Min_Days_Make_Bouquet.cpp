#include<bits/stdc++.h>
using namespace std;

int possible(vector<int>& arr, int day, int m, int k) {
    int n = arr.size();
    int cnt = 0, No_Of_Bouquet = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] <= day){
            cnt += 1; // Count consecutive flowers that can be picked
        } else {
            No_Of_Bouquet += (cnt / k); // Calculate bouquets from consecutive flowers
            cnt = 0; // Reset count for next segment
        }

    }
    No_Of_Bouquet += (cnt/ k); // Handle remaining flowers
    return No_Of_Bouquet >= m; // Check if we can make at least m bouquets
}

int minDays(vector<int>& arr, int n, int m, int k){
    if(m * k > n) return -1; // Not enough flowers to make m bouquets
    int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        int low  = mini;
        int high  = maxi;
    while(low <= high){
        int mid = (low + high)/ 2;
        if(possible(arr, mid, m, k)){
            high = mid - 1; // Try to find a smaller day
        } else {
            low = mid + 1; // Increase the day if not possible
        }
    }
    return low; // The minimum day to make m bouquets
}

int main(){
    int n, m, k;
    cout << "Enter the number of flowers : ";
    cin >> n; // Input number of flowers
    cout << "Enter the number of bouquets to make : ";
    cin >> m; // Input number of bouquets to make
    cout << "Enter the number of flowers in each bouquet : ";
    cin >> k; // Input number of flowers in each bouquet
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter bloom day for flower " << i + 1 << ": ";
        cin >> arr[i]; // Input flower bloom days
    }
    int result = minDays(arr, n, m, k); // Calculate minimum days
    if(result != -1) {
        cout << "Minimum days to make " << m << " bouquets: " << result << endl;
    } else {
        cout << "Not enough flowers to make " << m << " bouquets." << endl;
    }
}