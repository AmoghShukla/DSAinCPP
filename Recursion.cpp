#include<bits/stdc++.h>
using namespace std;

void Recursion_Example(){
    int counter = 0;
    if (counter == 5) return;
    cout << counter << endl;
    counter++;
    Recursion_Example();
}
void Name_n_times(int i, int n){
    if (i > n) return;
    cout << "Amogh" << endl;
    Name_n_times(i + 1, n);

}
void Num_n_times(int i, int n) {
    if (i > n) return;
    cout << i << endl;
    Num_n_times(i + 1, n);
}
void Num_n_times_Reversed(int i, int n) {
    if (i < 1) return;
    cout << i << endl;
    Num_n_times_Reversed(i-1, n);
}
void Num_n_times_BackTrack(int i, int n) {
    if (i < 1) return;
    Num_n_times_BackTrack(i - 1, n);
    cout << i << endl;
}
void Num_n_times_reversed_BackTrack(int i, int n) {
    if (i > n) return;
    Num_n_times_reversed_BackTrack(i + 1, n);
    cout << i << endl;
}
void Summation(int i, int sum){
    if (i < 0) {
        cout << sum << endl;
        return;
    }
    Summation(i-1, sum + i);}
int Summation_NO_Parameter(int n){
    if (n == 0) return 0;

    return n + Summation_NO_Parameter(n-1);
}
int Factorial_No_Parameter(int n){
    if (n == 0) return 1;
    return n * Factorial_No_Parameter(n-1); }
int Factorial(int i, int n){
    if (i < n) return 1;
    return i * Factorial(i - 1, n); }
int swap_array(int i, int arr[], int r){
    if (i >= r) return 0;
    swap(arr[i], arr[r]);
    swap_array(i + 1, arr, r - 1);
    return 0;
}
int swap_arr(int i, int arr[], int n){
    if (i > n/2) return 0;
    swap(arr[i], arr[n-i-1]);
    swap_arr(i+1, arr, n);
    return 0;
}
bool pallindrome(int i, string &s){
    if (i > s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1])return false;
    return pallindrome(i+1,s);
}
void simple_fibonacci(int n){
    vector <int> f(n+1);
    f[0] = 0;
    if (n > 0) f[1] = 1;
    for (int i = 2; i <=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    for (int i = 0; i <= n; i++) {
        cout << f[i] << " ";
    }
    cout << endl;
    
}
int recursive_fibonacci(int n){
    if (n <= 1) 
    return n;
    int last = recursive_fibonacci(n-1);
    int second_last = recursive_fibonacci(n-2);
    return last + second_last;
}


int main(){
    cout << recursive_fibonacci(3);
    return 0;
}