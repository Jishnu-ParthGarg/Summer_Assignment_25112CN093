//Write a program to Write function to find maximum.
#include <bits/stdc++.h>
using namespace std;
int Max(int arr[],int n){
    int i,max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    cout<<Max(a,n);
    return 0;
}