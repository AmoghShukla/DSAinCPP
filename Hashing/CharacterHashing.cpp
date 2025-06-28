#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    // hash compute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int n;
    cout << "Enter the number of characters to check: ";
    cin >> n;
    while(n--){
        char s1;
        cout << "Enter the character to check its frequency: ";
        cin >> s1;
        // fetch
        cout << hash[s1-'a'] << endl;
    }
}