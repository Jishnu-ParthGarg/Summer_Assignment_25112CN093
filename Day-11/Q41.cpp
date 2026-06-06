//Write a program to Write function to find sum of two numbers.
#include <bits/stdc++.h>
using namespace std;
int Sum(int a,int b){
    return a+b;
}
int main(){
    int n,m;
    cout<<"Enter the Numbers: ";
    cin>>n>>m;
    cout<<Sum(n,m);
    return 0;
}