//Write a program to Check whether a number is palindrome.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,r,n1;
    cout<<"Enter the Number: ";
    cin>>n;
    n1=n;
    while (n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (n1==s)
    {
        cout<<"Yes,The number is Pallindrome.";
    }
    
    return 0;
}