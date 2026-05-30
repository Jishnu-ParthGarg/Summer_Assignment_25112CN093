//Write a program to Print prime numbers in a range
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter end range number: ";
    cin>>n;
    cout<<"Following are Prime Numbers"<<endl;
    for(int i=2;i<=n;i++){
        bool iP = true;
        for(int j=2;j*j<=i;j++) {
            if(i%j==0){
                iP=false;
                break;
            }
         }
        if (iP)
            cout<<i<<endl;
    }
    return 0;
}