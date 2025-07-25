#include<bits/stdc++.h>
using namespace std;

int FindSquareRoot(int x){
    if (x < 0) return -1;
    if (x == 0 || x == 1) return x; // Handle base cases
    int low = 2, high = x, ans = 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (mid * mid == x) return mid; // Found exact square root
        else if (mid * mid < x){
            ans = mid; // Update answer to the last valid mid
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }
    return ans; // Return the last valid answer
}

int main(){
    int x;
    cout << "Enter a number to find its square root: ";
    cin >> x;

    int result = FindSquareRoot(x);
    if (result == -1) {
        cout << "Negative input is not allowed." << endl;
    } else {
        cout << "The integer square root of " << x << " is: " << result << endl;
    }

    return 0;
}