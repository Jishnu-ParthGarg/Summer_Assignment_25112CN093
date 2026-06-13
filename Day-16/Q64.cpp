//Write a program to Remove duplicates from array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<n;i++){
        bool duplicate=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            cout<<arr[i]<<" ";
        }
    }
    delete[] arr;
    return 0;
}