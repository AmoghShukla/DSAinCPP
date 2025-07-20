#include<bits/stdc++.h>
using namespace std;

int MaxProfit(vector<int>& arr, int n){
    int maximum_profit = 0;
    int mini = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
        else{
            maximum_profit = max(maximum_profit, arr[i] - mini);
        }
    }
    return maximum_profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int profit = MaxProfit(prices, n);
    cout << profit << endl;
    return 0;
}