#include<bits/stdc++.h>
using namespace std;

vector<int> UnionofTwoSortedArrays(vector<int>& arr, int n, vector<int>& arr2, int m){
    vector<int> unionArr;
    int a1 = arr.size();
    int a2 = arr2.size();
    int i = 0, j = 0;
    while(i < a1 && j < a2){
        if (arr[i] <= arr2[j]){
            if (unionArr.size() == 0 ||  unionArr.back() != arr[i]){
                unionArr.push_back(arr[i]);
            }
            i++;

        }
        else{
            if (unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while( j < a2){
        if (unionArr.size() == 0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while( i < a1){
        if (unionArr.size() == 0 || unionArr.back() != arr[i]){
            unionArr.push_back(arr[i]);
        }
        i++;
    }
    return arr = unionArr;

}

int main(){
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    UnionofTwoSortedArrays(arr, n, arr2, m);

    cout << "Union of the two sorted arrays: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}