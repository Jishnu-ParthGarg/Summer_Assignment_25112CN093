//Write a program to Generate Fibonacci series
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,c,i;
    for(i=0;i<=10;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}