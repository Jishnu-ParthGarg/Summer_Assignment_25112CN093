//Write a program to Merge arrays.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int *arr1=new int[n1];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int *arr2=new int[n2];
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int *merged=new int[n1+n2];
    for(int i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    cout<<"Merged array: ";
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<" ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] merged;
    return 0;
}