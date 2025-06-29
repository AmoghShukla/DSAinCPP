#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if (marks < 35){
        cout << "F";
    } else if (marks >= 35 && marks <50){
        cout <<"D";
    } else if (marks >= 50 && marks < 60){
        cout <<"C";
    } else if (marks >= 60 && marks < 75){
        cout <<"B";
    } else if (marks >= 75 && marks < 90){
        cout << "A";
    } else if (marks >= 90 && marks <= 100){
        cout << "A+";
    } else {
        cout << " Inavlid Marks ";
    }
    return 0;
}