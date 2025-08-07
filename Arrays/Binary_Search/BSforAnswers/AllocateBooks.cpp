#include<bits/stdc++.h>
using namespace std;

int CountStudents(vector<int>&books, int pages){
    int students = 1;
    long long PageStudent = 0;
    for(int i = 0; i < books.size(); i++){
        if(PageStudent + books[i] > pages){
            students++;
            PageStudent = books[i];
        }
        else{
            PageStudent += books[i];
        }
    }
    return students;
}

int findPages(vector<int>& books, int n, int m){
    if(m > n) return -1;

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(CountStudents(books, mid) <= m){
            result = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> books(n);
    for(int i = 0; i < n; i++){
        cin >> books[i];
    }
    int pages;
    cin >> pages;
    int students = CountStudents(books, pages);
    cout << students << endl;
    return 0;
}