//Write a program to Find product of digits.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m=1,r;
    cout<<"Enter the Number: ";
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        m=m*r;
        n=n/10;
    }
    cout<<"Product of digits of a number is:"<<m;
    return 0;
}