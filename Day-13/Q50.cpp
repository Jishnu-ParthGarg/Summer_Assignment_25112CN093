//Write a program to Find sum and average of array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    float avg=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int Arr[n];
    cout<<"Enter The Elements OF array:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<":";
        cin>>Arr[i];
        sum=sum+Arr[i];
    }
    cout<<endl;
    avg=sum/n;
    cout<<"Sum of Elements of Array:"<<sum<<endl;
    cout<<"Average of Elements of Array:"<<avg;
    return 0;   
}