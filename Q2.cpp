//Write a program to Print multiplication table of a given number
#include <bits\stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the given number: ";
    cin>>n;
    cout<<"Multiplication Table of "<<n<<endl;
    for (i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}