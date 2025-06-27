#include<bits/stdc++.h>
using namespace std;

void Pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    } 
}
void Pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< i << " ";
        }
        cout<<endl;
    } 
}
void Pattern5(int n){

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Pattern6(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Pattern7(int n){
    for(int i=0; i<n;i++){
        // Print spaces
        for (int j=0; j<n-i-1;j++){
            cout<<" ";
            }
        
        for(int j = 0; j<2*i+1; j++){
            cout<<"* ";
        }

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern8(int n){
    for(int i=0; i<n;i++){
        // Print spaces
        for (int j=0; j<=i;j++){
            cout<<" ";
            }
        
        for(int j = 0; j<2*n-(2*i+1); j++){
            cout<<"* ";
        }

        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern9(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars;
        stars = i;
        if (i > n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Pattern10(int n){
    for(int i=0; i<n; i++){
        int start=1;
        if (i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout<<endl;
    }
}
void Pattern11(int n){
    int space= 2*(n-1);
    for(int i=1; i<=n; i++){
        
        //num
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //space
        for(int j=1; j<=space;j++){
            cout<<" ";
        }


        //num
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space -= 2;
    }
}
void Pattern12(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num = num + 1 ;
        }
        cout<<endl;
    }
}
void Pattern13(int n){
    for(int i=0; i<=n; i++){
        for(char ch='A'; ch<='A' + i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void Pattern14(int n){
    for(int i=0; i<=n; i++){
        for(char ch='A'; ch<='A' + n-i-1; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern15(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        ch = ch + 1;
        cout << endl;
    }
}
void Pattern16(int n){
    for(int i=0; i<n;i++){
        //Spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        // Characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch<<" ";
            if (j<=breakpoint) ch++;
            else ch--;
        }

        //Spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern17(int n){
    char ch = 'E';
    for(int i=0; i<n; i++){
        for(char ch='E' - i; ch <= 'E'; ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}
void Pattern18(int n){
    int startSpace = 0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }

        // Space
        for(int j=0; j<startSpace; j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        startSpace += 2;
        cout<<endl;
    }
    // Inverted Pattern
    startSpace = 8;
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        // Space 
        for(int j=0; j<startSpace; j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        startSpace -= 2;
        cout<<endl;
    }
}
void Pattern19(int n){
    int ini_space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;

        if(i > n) stars = 2*n-i;

        //star
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<ini_space; j++){
            cout<<" ";
            
        }

        //star
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        if(i < n) ini_space -= 2;
        else ini_space += 2;
        cout<<endl;

    }
}
void Pattern20(int n){
    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i== 0 || j == 0 || i == n-1 ||j == n-1){
                cout<<"*";
            } 
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Pattern21(int n){
    for(int i=0; i<2*n-1;i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right= (2*n-2) - j;
            int bottom = (2*n-2) - i;

            cout << n-min(min(top, bottom), min(left, right)) << " ";
            }
            cout<<endl;
        }
    }


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        Pattern21(n);
    } 
}