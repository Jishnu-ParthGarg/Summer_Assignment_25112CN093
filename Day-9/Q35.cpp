//Write a program to Print repeated character pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,j;
    char i;
    cout<<"Enter The Number of Rows: ";
    cin>>n;
    for(i='A';i<'A'+n;i++){
        for(j=1;j<=i-'A'+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}