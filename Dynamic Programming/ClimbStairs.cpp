#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int first = 1, second = 2, ways;
        for (int i = 3; i <= n; i++) {
            ways = first + second;
            first = second;
            second = ways;
        }
        return second;
    }
};


int main(){
    Solution solution;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int result = solution.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << result << endl;
    return 0;
}