//Write a program to Print reverse star pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    cout<<"Enter The Number of Rows: ";
    cin>>n;
    for (i=n;i>=0;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}