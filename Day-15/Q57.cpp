//Write a program to Reverse array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int i;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<("Reversed array:");
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}