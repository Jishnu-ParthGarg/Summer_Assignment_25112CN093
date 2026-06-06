//Write a program to Write function for palindrome.
#include <bits/stdc++.h>
using namespace std;
void pali(int a){
    int r,d=0,b;
    b=a;
    while(b!=0){
        r=b%10;
        d=d*10+r;
        b=b/10;
    }
    if(a==d){
        cout<<"Given Number is a Pallindrome Number : ";
    }
    else{
        cout<<"Given Number is not a Pallindrome Number : ";
    }
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    pali(n);
    return 0;
}