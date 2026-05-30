//Write a program to Check whether a number is prime.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    bool iP = true;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        iP=false;
    }
    else{
        for(int i=2;i<=n/2;i++) {
            if(n%i==0){
                iP=false;
                break;
            }
        }
    }
    if (iP)
        cout << n << " is a Prime Number.";
    else
        cout << n << " is not a Prime Number.";
    return 0;
}