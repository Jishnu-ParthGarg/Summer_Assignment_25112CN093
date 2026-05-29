//Write a program to Find sum of digits of a number.
#include <bits\stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter the Number: ";
    cin>>n;
    while (n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }
    cout<<"Sum of digits of number is:"<<s;
    return 0;
}