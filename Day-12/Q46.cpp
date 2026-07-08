//Write a program to Write function for Armstrong.
#include <bits/stdc++.h>
using namespace std;
void arms(int a){
    int r,d=0,a1,a2,c=0;
    a1=a2=a;
    while (a2!=0){
        c++;
        a2=a2/10;
    }
    while(a1!=0){
        r=a1%10;
        d=d+round(pow(r,c));
        a1=a1/10;
    }
    if(a==d){
        cout<<"Given Number is an Armstrong Number : ";
    }
    else{
        cout<<"Given Number is not an Armstrong Number : ";
    }
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    arms(n);
    return 0;
}