////Write a program to Find pair with given sum.
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
    int sum;
    cout<<"Enter the required sum: ";
    cin>>sum;
    bool found=false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Pair found: "<<arr[i]<<" "<<arr[j];
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        cout<<"No pair found.";
    }
    delete[] arr;
    return 0;
}