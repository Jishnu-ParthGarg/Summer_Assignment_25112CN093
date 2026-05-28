//Write a program to Calculate sum of first N natural numbers. 
#include <bits\stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the upper limit of natural numbers :";
    cin>>n;
    sum=(n*n+n)/2;
    cout<<"Sum of first "<<n<<"numbers is "<<sum;
    return 0;

}