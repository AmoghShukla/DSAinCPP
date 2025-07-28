#include<bits/stdc++.h>
using namespace std;

int fun(int mid, int n){
    long long answer = 1;
    for(int i = 0; i< n; i++){
        answer *= mid;
        if (answer > INT_MAX) {
            return 0; // Avoid overflow
        }
    }
    return answer;
}

int findNthRoot(int n, int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = (low + high) / 2;
        if (fun(mid, n) == m) return mid;
        else if (fun(mid, n) < m) low = mid + 1;
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