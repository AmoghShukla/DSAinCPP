#include<bits/stdc++.h>
using namespace std;

int fun(int mid, int n){
    long long answer = 1;
    while(n > 0){
        if(n % 2 == 1){
            answer *= mid;
            n -= 1;
        } else {
            mid = mid * mid;
            n /= 2;
        } 
    }
    return answer;
}

int findNthRoot(int n, int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = (low + high) / 2;
        int midN = fun(mid, n);
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