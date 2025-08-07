#include<bits/stdc++.h>
using namespace std;

long double minimizeMaxDistance(vector<int>& stations, int k) {
    int n = stations.size();
    vector<int> HowMany(n-1, 0); // How many times we have split this segment is stored here
    priority_queue<pair<long double, int>> pq; // Priority queue to store the segments

    for (int i = 0; i < n - 1; i++) { // this loop initializes the priority queue
        long double distance = stations[i + 1] - stations[i]; // Calculate the distance between stations
        HowMany[i] = distance; // Store the initial distance of the segment
        pq.push({distance, i}); // Push the segment into the priority queue to keep track of the largest segments
    }

    for(int gasStation = 1; gasStation < k; gasStation++) { // this loop adds gas stations to the largest segments
        auto tp = pq.top(); // Get the largest segment and its index
        pq.pop(); // Remove the largest segment from the priority queue
        int secInt = tp.second; // Get the index of the segment
        HowMany[secInt]++; // Increment the split count for this segment
        long double initialDifference = stations[secInt + 1] - stations[secInt]; // Calculate the initial difference
        long double newDifference = initialDifference / (HowMany[secInt] + 1); // Calculate the new difference
        pq.push({newDifference, secInt}); // Push the updated segment back into the priority queue
    }
    return pq.top().first; // Return the minimized maximum distance
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