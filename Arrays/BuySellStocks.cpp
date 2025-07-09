#include<bits/stdc++.h>
using namespace std;

int MaxProfit(vector<int>& arr, int n){
    int max_profit = 0;
    int mini = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
        else{
            max_profit = max(max_profit, arr[i] - mini);
        }
    }
    return max_profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int profit = MaxProfit(prices, n);
    cout << profit << endl;
    return 0;
}