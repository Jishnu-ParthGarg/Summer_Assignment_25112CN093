//Write a program to Write function for perfect number.
#include <bits/stdc++.h>
using namespace std;
void perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"Given Number is a Perfect Number";
    }
    else{
        cout<<"Given Number is not a Perfect Number";
    }
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    perfect(n);
    return 0;
}