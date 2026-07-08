//Write a program to Print reverse pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}