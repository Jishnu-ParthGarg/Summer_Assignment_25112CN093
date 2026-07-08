//Write a program to Move zeroes to end.
//Write a program to Move zeroes to end.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"Array after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}