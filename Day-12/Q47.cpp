//Write a program to Write function for Fibonacci.
#include <bits/stdc++.h>
using namespace std;
void fibo(int m){
    int a=0,b=1,c;
    if(m==0){
        cout<<a;
    }
    if(m==1){
        cout<<a<<endl<<b;
    }
    if(m>1){
        cout<<a<<endl<<b<<endl;
        for(int i=2;i<=m;i++){
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the Number of Terms OF series: ";
    cin>>n;
    fibo(n);
    return 0;
}