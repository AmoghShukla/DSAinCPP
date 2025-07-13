#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int>& arr1, int m, vector<int>& arr2, int n){
    int i=0, j=0;
    vector<int> intersection;
    while (i<m && j<n){
        if (arr1[i]<arr2[j]) i++;
        else if (arr1[i]>arr2[j]) j++;
        else{
            intersection.push_back(arr1[i]);
            i++;
            j++;
            
        }

    }
    return intersection;
}

int main(){
    int m, n;
    cout << "Enter the number of elements in the first array: ";
    cin >> m;
    vector<int> arr1(m);
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> n;
    vector<int> arr2(n);
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    vector<int> result = Intersection(arr1, m, arr2, n);
    cout << "Intersection of the two sorted arrays: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}