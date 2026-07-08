//Write a program to Find common elements.
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
    cout<<"Common elements: ";
    for(int i=0;i<n1;i++){
        bool found=false;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                found=true;
                break;
            }
        }
        if(found){
            bool duplicate=false;
            for(int j=0;j<i;j++){
                if(arr1[i]==arr1[j]){
                    duplicate=true;
                    break;
                }
            }
            if(!duplicate){
                cout<<arr1[i]<<" ";
            }
        }
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}