//Write a program to Input and display array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter size of array : ";
    cin>>n;
    int Arr[n];
    cout<<"Enter The Elements OF array:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Enter Element"<<i+1<<":";
        cin>>Arr[i];
    }
    cout<<"Printing Elements Of the array :"<<"[ ";
    for(i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"]";
    return 0;   
}