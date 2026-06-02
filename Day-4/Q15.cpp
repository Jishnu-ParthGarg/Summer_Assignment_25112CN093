//Write a program to Check Armstrong number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,n1,n2,c=0,d=0,r;
    cout<<"Enter the Number:";
    cin>>n;
    n1=n;
    n2=n;
    while(n!=0){
        c++;
        n=n/10;
    }
    while(n1!=0){
        r=n1%10;
        d=d+pow(r,c);
        n1=n1/10;
    }
    if(n2==d) cout<<"Number Given is an Armstrong Number";
    return 0;
}