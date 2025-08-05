#include<bits/stdc++.h>
using namespace std;

long double minimizeMaxDistance(vector<int>& stations, int k) {
    int n = stations.size();
    vector<int> HowMany(n-1, 0);
    priority_queue<pair<long double, int>> pq;

    for (int i = 0; i < n - 1; i++) {
        long double distance = stations[i + 1] - stations[i];
        HowMany[i] = distance;
        pq.push({distance, i});
    }

    for(int gasStation = 1; gasStation < k; gasStation++) {
        auto tp = pq.top();
        pq.pop();
        int secInt = tp.second;
        HowMany[secInt]++;
        long double initialDifference = stations[secInt + 1] - stations[secInt];
        long double newDifference = initialDifference / (HowMany[secInt] + 1);
        pq.push({newDifference, secInt});
    }
    return pq.top().first;
}

int main() {
    int n;
    cin >> n;
    vector<int> stations(n);
    for (int i = 0; i < n; i++) {
        cin >> stations[i];
    }
    int k;
    cin >> k;
    cout << "Minimum maximum distance: " << minimizeMaxDistance(stations, k) << endl;
    return 0;
}