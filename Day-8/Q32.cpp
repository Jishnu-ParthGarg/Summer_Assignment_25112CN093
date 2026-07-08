//Write a program to Print repeated-number pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    cout<<"Enter The Number of Rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}