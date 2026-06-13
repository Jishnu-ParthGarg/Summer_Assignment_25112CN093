//Write a program to Find missing number in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int *arr=new int[n-1];
    cout<<"Enter "<<n-1<<" array elements: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=n*(n+1)/2;
    int arrSum=0;
    for(int i=0;i<n-1;i++){
        arrSum+=arr[i];
    }
    cout<<"Missing number: "<<sum-arrSum;
    delete[] arr;
    return 0;
}