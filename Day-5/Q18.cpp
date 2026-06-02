//Write a program to Check strong number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,n1,r;
    cout<<"Enter a number:";
    cin>>n;
    n1=n;
    while(n!=0){
        int fact=1;
        r=n%10;
        for (int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        s=s+fact;
        n=n/10;
    }
    if (n1==s)
        cout<<"The number given is a Strong Number";
    else
        cout<<"The number given is not a Strong Number";
    return 0;
}