#include<bits/stdc++.h>
using namespace std;

int fun(int mid, int n, int m){
    long long ans = 1;
    for(int i = 0; i<n; i++){
        ans *= mid;
        if(ans > m) return 2; // Early exit if product exceeds m 
    }
    if (ans == m) return 1; // Found the nth root
    return 0; // Not found

}

int findNthRoot(int n, int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = (low + high) / 2;
        int midN = fun(mid, n, m);  
        if (midN == 1) return mid;
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1; // Not found
}

int main(){
    int n, m;
    cout << "Enter the value of n (root) and m (number): ";
    cin >> n >> m;
    int result = findNthRoot(n, m);
    if(result != -1) {
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    } else {
        cout << "No integer nth root found for the given number." << endl;
    }
}