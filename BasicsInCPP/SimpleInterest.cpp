#include<bits/stdc++.h>
using namespace std;

int SI(int p, int r, int t){
    // Simple Interest = (Principal * Rate * Time) / 100
    return (p * r * t) / 100;
}

int main(){
    int p, r, t;
    cout<<"Enter principal, rate and time: ";
    cin>>p>>r>>t;
    SI(p, r, t);
    cout<<"Simple Interest is: "<<SI(p, r, t)<<endl;
    
}