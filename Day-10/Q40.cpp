//Write a program to Print character pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    char k;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k='A';k<'A'+i;k++){
            cout<<k;
        }
        for(k='A'+i-2;k>='A';k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}