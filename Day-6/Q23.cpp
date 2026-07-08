//Write a program to Count set bits in a number. 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        count=count+(n&1);
        n=n>>1;
    }
    cout<<"Number of set bits: "<<count<<endl;
    return 0;
}