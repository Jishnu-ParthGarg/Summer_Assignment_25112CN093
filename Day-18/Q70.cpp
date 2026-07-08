//Write a program to Selection sort.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        int minIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<"Sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    delete[] arr;
    return 0;
}
