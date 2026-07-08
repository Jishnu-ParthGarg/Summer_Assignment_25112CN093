//Write a program to Reverse a number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,r;
    cout<<"Enter the Number: ";
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    cout<<"Reverse of a number is:"<<s;
    return 0;
}