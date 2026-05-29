//Write a program to Find factorial of a number
#include <bits\stdc++.h>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"Enter the given number: ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<"is "<<fact<<endl;
    return 0;
}