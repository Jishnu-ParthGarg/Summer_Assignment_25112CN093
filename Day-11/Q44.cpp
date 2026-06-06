//Write a program to Write function to find factorial.
#include <bits/stdc++.h>
using namespace std;
int factorial(int a){
    int fact=1,i;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the Numbers: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}