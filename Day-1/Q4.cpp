//Write a program to Count digits in a number.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c=0;
    cout<<"Enter the given number: ";
    cin>>n;
    while(n!=0){
        n=n/10;
        c++;
    }
    cout<<"Number of digits = "<<c<<endl;
    return 0;
}