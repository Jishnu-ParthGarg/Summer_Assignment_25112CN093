//Write a program to Print character triangle
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    char j;
    cout<<"Enter The Number of Rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j='A';j<'A'+i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}