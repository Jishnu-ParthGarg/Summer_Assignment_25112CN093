//Write a program to Print half pyramid pattern. 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    cout<<"Enter The Number of Rows: ";
    cin>>n;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}