// functions are used to perform specific tasks, and they can be reused throughout the program.
// Functions can take parameters and return values, allowing for modular and organized code.
// There are 4 types of functions in C++:
// 1. Function with no parameters and no return value
// 2. Function with parameters and no return value
// 3. Function with no parameters and a return value
// 4. Function with parameters and a return value


// Add 2 numbers using a function

#include<bits/stdc++.h>
using namespace std;

// int FindSum( int num1, int num2){
//     int sum = num1 + num2;
//     return sum;
// }

// int main() {
//     int num1;
//     int num2;
//     cin >> num1 >> num2;
//     int res = FindSum(num1, num2);
//     cout << res;
//     return 0;
// }

// Pass by Value function
void doSomething(int num) {
    cout << num << endl; // Output the modified value
    num += 10; // This change will not affect the original variable
    cout << num << endl; // Output the modified value
    num += 20; // This change will not affect the original variable
    cout << num << endl; // Output the modified value
}

int main(){
    int num = 10;
    doSomething(num);
    cout << "Value of num after function call: " << num << endl; // num remains 10
    return 0;
}