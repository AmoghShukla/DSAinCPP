#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        long long original = x;
        long long last_num = 0;
        long long new_num = 0;
        while(x > 0){
            last_num = x % 10;
            new_num = new_num*10 + last_num;
            x /= 10;            
        }
        if(new_num == original) return true;
        else return false;        
}

int main(){
    int num;
    cout << " Enter a number : ";
    cin >> num;
    if(isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
}