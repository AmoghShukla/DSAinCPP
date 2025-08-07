#include <bits/stdc++.h>
using namespace std;

int maxele(const vector<int>& piles) {
    int max_element = INT_MIN;
    for (int i = 0; i < piles.size(); i++) {
        max_element = max(max_element, piles[i]);
    }
    return max_element;
}

long long Func_hours(const vector<int>& piles, int hourly) {
    long long Total_Hours = 0;
    for (int i = 0; i < piles.size(); i++) {
        Total_Hours += (piles[i] + hourly - 1) / hourly;  // integer ceil
    }
    return Total_Hours;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = maxele(piles);
    int answer = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long total_hours = Func_hours(piles, mid);

        if (total_hours <= h) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return answer;
}
