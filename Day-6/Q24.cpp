//Write a program to Find x^n without pow(). 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n,i;
    long long result=1;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<endl<<"Enter the power of number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    cout<<n<<"th power of "<<x<<" is "<<result;
    return 0;
}