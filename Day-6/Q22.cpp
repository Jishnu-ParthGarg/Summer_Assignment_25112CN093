//Write a program to Convert binary to decimal.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int binary,bit[32],i = 0;
    int decimal=0;
    cout<<"Enter a binary number: ";
    cin>>binary;
    while(binary>0){
        bit[i]=binary%10;
        binary/=10;
        decimal+=bit[i]*pow(2,i);
        i++;
    }
    cout<<"Decimal: "<<decimal<<endl;
    return 0;
}