#include<bits/stdc++.h>
using namespace std;

int count_digits(int number) {
    int count = 0;
    while (number > 0){
        int last_digit = number % 10;
        count ++;
        number = number/10;
    }
    return count;
}
int count_digits_alternate(int n){
    int cnt = (int) log10(n) + 1;
    return cnt;
}
void reverse_number(int n){
    int reversed = 0;
    while(n > 0){
        int last_digit = n % 10;
        reversed = (reversed * 10) + last_digit;
        n = n/10;
    }
    cout << reversed;
}
void Pallindrome_number(int n){
    int duplicate = n;
    int reversed = 0;
    while(n > 0){
        int last_digit = n % 10;
        reversed = (reversed * 10) + last_digit;
        n = n/10;
    }
    if (reversed == duplicate) cout << duplicate << " is Pallindrome";
    else cout << duplicate << " is not Pallindrome";
}
void Armstrong_number(int n){
    int original = n;
    int sum = 0;
    while(n > 0){
        int last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n = n/10;
    }
    if (sum == original) {
        cout << original << " is an Armstrong Number";
    } else {
        cout << original << " is not an Armstrong Number";
    }
}
void Print_all_Divisions(int n){
    cout << "Divisions of " << n << " are: ";
    for (int i=1; i<= n; i++){
        if (n%i == 0){
            cout << i << ", ";
        }
    }
}
void Print_Divisions_Vector(int n){
    vector<int> list;
    for (int i=1; i*i <= n ; i++){
        if (n % i == 0) {
            list.push_back(i);
            if (i != n/i){
                list.push_back(n/i);
            }
        }
    }
    sort(list.begin(), list.end());
    for (auto it : list) cout << it << " ";  

}
void Prime_Number(int n){
    int counter = 0;
    for (int i=1; i*i <= n; i++){
        if(n % i == 0) {
            counter++;
            if (i != n/i){
                counter++;
            }
        }
    }
    if (counter == 2){
        cout << n << " is a Prime Number";
    } else {
        cout << n << " is not a Prime Number";
    }
}
int GCD(int a, int b){
    while(a > 0 && b > 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << "GCD of " << n << " and " << m << " is: " << GCD(n, m);
    return 0;
}

