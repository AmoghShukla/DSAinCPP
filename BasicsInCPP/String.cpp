#include<bits/stdc++.h>
using namespace std;


int main(){
    string str = "Amogh";
    int len = str.length();
    // or int len = str.size();
    cout << "Length of the string is: " << len << endl;
    cout << "String is: " << str << endl;
    str[len - 1] = 'a'; // Changing last character to 'a'
    cout << "Modified string is: " << str << endl;

    return 0;
}