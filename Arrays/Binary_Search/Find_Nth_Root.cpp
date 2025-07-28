#include<bits/stdc++.h>
using namespace std;

long long fun(int mid, int n){
    long long answer = 1;
    while(n > 0){
        if(n % 2 == 1){
            answer *= mid;
            if(answer > 1e18) return LLONG_MAX; // overflow guard
            n -= 1;
        } else {
            mid = mid * mid;
            if(mid > 1e9) return LLONG_MAX; // avoid overflow
            n /= 2;
        } 
    }
    return answer;
}

int findNthRoot(int n, int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = (low + high) / 2;
        long long midN = fun(mid, n);  // ✅ Fixed type here
        if (midN == m) return mid;
        else if (midN < m) low = mid + 1;
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
